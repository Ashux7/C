#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include<stdlib.h>

int UserID;
char Password[100];
int CoursesNum = 0;

struct Records
{
    int uid;
    char name[100];
    char CoursesArr[4][50];
    int GradesArr[4];
};

struct Records R1;


bool courseChecker(int UserID)
{
    FILE *fp;
    fp=fopen("index.txt","r");
    if(fp==NULL)
    {
       printf("Error accessing user database");
       return false;
    }
    int FileEndChecker=0;
    int FetchedUID;
    char character;
    while(FileEndChecker != EOF)
    {
        FileEndChecker = fscanf(fp, "%d, %[^,],", &R1.uid, R1.name);      
        if((UserID!=R1.uid))
        {
            fscanf(fp, "%*s");
        }
        else if ((UserID==R1.uid))
        {
            break;
        }
    }
    int eof;
    while(CoursesNum<4)
    {
        eof = fscanf(fp, "%c", &character);
        if (CoursesNum==0)
        {
            fseek(fp, -1, SEEK_CUR);
        }
        if ((character == '\n') || (eof == EOF))
        {
            return true;
        }
        fscanf(fp, "%[^:]:%d", R1.CoursesArr[CoursesNum], &R1.GradesArr[CoursesNum]);
        CoursesNum++;
    }
    fclose(fp);
}


bool password_match(int UserID, char* Password)
{
    FILE *fp;
    fp = fopen("passwords.txt", "r");
    if(fp==NULL)
    {
       printf("Error accessing user database");
       return false;
    }
    int ValidUserID;
    char ValidPassword[100];
    int FileEndChecker = 0;
    while(FileEndChecker != EOF)
    {
        FileEndChecker = fscanf(fp, "%d,%s,", &ValidUserID, ValidPassword);
        if ((UserID==ValidUserID)&&((strcmp(Password, ValidPassword)==0)))
        {
            fclose(fp);
            return true;
        }
    }
    fclose(fp);
    
    return false;
}


void View_Details()
{
    printf("User Details:\nName: %s\n\nCourses and Grades:", R1.name);
    for (int i = 0 ; i < CoursesNum ; i++)
    {
        printf("\n\t%s: %d", R1.CoursesArr[i], R1.GradesArr[i]);
    }
}


void Course_Add()
{
    char newCourse[50];
    int newGrade;
    if(CoursesNum==4)
    {
        printf("\nUser already has 4 courses. Cannot add another.");

        return;
    }
    printf("Enter the new course name: ");
    scanf("%s", newCourse);
    printf("Enter the grade for %s: ", newCourse);
    scanf("%d", &newGrade);
    FILE* fp;
    fp = fopen("index.txt", "r+");
    if (fp == NULL) {
        printf("Error opening file");
        return;
    }
    fseek(fp, 0, SEEK_SET);
    int endOfFile=0;
    int fetchedID;
    char fetchedName[100];
    while (endOfFile!= EOF) {
        endOfFile=fscanf(fp, "%d, %[^,],", &fetchedID, fetchedName) ;
        if((fetchedID!=R1.uid))
        {
            fscanf(fp, "%*s");
        }
        else if ((fetchedID==R1.uid))
        {   
            break;
        }
    }
    
    int cursorPosition = ftell(fp);

    FILE* temp;
    temp = fopen("tempData.txt", "w+");
    int endOfFile_Temp = 0;
    char tempData[150];
    while(endOfFile_Temp != EOF)
    {
        endOfFile_Temp = fscanf(fp, "%s", tempData);
        if(endOfFile_Temp == EOF)
        {
            break;
        }
        fprintf(temp, "%s\n", tempData);
    }

    fseek(fp, cursorPosition, SEEK_SET);
    fprintf(fp, "%s:%d", newCourse, newGrade);
    if (CoursesNum != 0)
    {
        fprintf(fp, ",");
    }
    endOfFile_Temp = 0;
    fseek(temp, 0, SEEK_SET);

    while(endOfFile_Temp != EOF)
    {
        endOfFile_Temp = fscanf(temp, "%s", tempData);
        if(endOfFile_Temp == EOF)
        {
            break;
        }
        fprintf(fp, "%s\n", tempData);
    }
    fclose(temp);
    remove("tempData.txt");

    CoursesNum++;
    fclose(fp);
    printf("New Course added Successfully!!");
    return;
}


void Get_Grade()
{
    char requiredCourse[50];
    printf("User has registered for the following courses :\n");
    for (int i = 0 ; i<CoursesNum ; i++)
    {
        printf("\n%s", R1.CoursesArr[i]);
    }
    printf("\nEnter name of Course that you wish to fetch : ");
    scanf("%s", requiredCourse);
    for (int i = 0 ; i < CoursesNum ; i++)
    {
        if(strcmp(requiredCourse, R1.CoursesArr[i]) == 0)
        {
            printf("\n\nGrade obtained in %s is %d", requiredCourse, R1.GradesArr[i]);
            return;
        }
    }
    printf("\n\nCourse \"%s\" not found for User %s", requiredCourse, R1.name);
    return;
}


void main()
{
    printf("\nEnter User ID: ");
    scanf("%d", &UserID);
    printf("\nEnter Password: ");
    scanf("%s", Password);
    if (password_match(UserID, Password))
    {
        printf("LOGIN SUCCESSFUL!!");
        courseChecker(UserID);
        int choice;
        printf("\n\n\t|| MENU ||\nEnter 1 : View Details\nEnter 2 : Add New Course\nEnter 3 : Get Grade for a Specific Course\nEnter 4 : EXIT\n\n");
        printf("Enter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            View_Details();
            break;

        case 2:
            Course_Add();
            break;
        case 3:
            Get_Grade();
            break;
        case 4:
            printf("Exiting Program...");
            return;
        default:
            printf("Invalid Choice.");
            break;
    }
  }
    else
    {
        printf("LOGIN UNSUCCESSFUL!! INVALID CREDENTIALS!!");
        return;
    }
}
