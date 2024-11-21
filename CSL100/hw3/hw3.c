#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct Record {
    int uid;
    char name[100];
    char courses[4][50];
    char grades[4][5];
};

bool password_match(int uid, char *password) {
    FILE *file = fopen("passwords.txt", "r");
    if (file==NULL) {
        printf("Error opening passwords.txt");
        return false;
    }

    int file_uid;
    char file_password[100];
    while (fscanf(file, "%d,%s", &file_uid, file_password) == 2) {
        if ((file_uid == uid) && (strcmp(file_password, password) == 0)) {
            fclose(file);
            return true;
        }
    }

    fclose(file);
    return false;
}


bool load_info(int Uid,struct Record *a){
    FILE *file = fopen("index.txt", "r");
    if (file==NULL) {
        printf("Error opening index.txt");
        return false;
    }
    int index_uid;
    char index_name[100];
    char index_courses[4][50];
    char index_grades[4][5];
    while (fscanf(file, "%d,%100[^,]", &index_uid, index_name) == 2) {
        for (int i = 0; i < 4; i++){
            if(fscanf(file, "%50[^:],%5[^,]", index_courses[i], index_grades[i])!=""){
                continue;
            }
            else{
                i=4;
            }
        }
    if (index_uid == Uid) {
            a->uid = index_uid;
            strcpy(a->name, index_name);
            for (int i = 0; i < 4; i++) {
                strcpy(a->courses[i], index_courses[i]);
                strcpy(a->grades[i], index_grades[i]);
            }
            fclose(file);
            return true;
        }
    }
   fclose(file);
   printf("Record not found !!!");
   return false;
}


void view_details(struct Record *a){
  printf("Record found: %d, %s\n", a->uid, a->name);
            for (int i = 0; i < 4; i++) {
                printf("Course: %s, Grade: %s\n", a->courses[i], a->grades[i]);
            }
            return;
}


void add_course(struct Record *a){
    int index_uid;
    char index_name[100];
    char index_courses[4][50];
    int index_grades[4];
    char Sname[50];
    int G;
    printf("Enter Subject name");
    scanf("%s",Sname);
    printf("Enter Grade:");
    scanf("%d",G);
    FILE *file = fopen("index.txt", "a");
    if (file==NULL) {
        printf("Error opening index.txt");
        return;
    }
   while (fscanf(file, "%d,%100[^,],", &index_uid, index_name) == 2) {
        for (int i = 0; i < 4; i++) {
            if (fscanf(file, "%50[^,],%d,", index_courses[i], &index_grades[i])!=2) {
                break;
            }
        }
    if (index_uid == a->uid) {
            fprintf(file,Sname,G);
            printf("Record updated Successfully!!!!");
            fclose(file);
            return;
        }
    }
    printf("More than 4 courses not allowed");
    fclose(file);
    return;
}




void get_grade(struct Record *a){
    char s[50];
    printf("Enter Subject:");
    scanf("%s",s);
    for(int i=0;i<4;i++){
        if(strcmp(a->courses[i],s)==0){
            printf("%s",a->grades[i]);
            }
        else{
              printf("Not opted such subject");
              }
        }
        return;
}

int main(){
	int uid;
	char password[100];
	printf("Enter UserID:");
	scanf("%d",&uid);
	printf("Enter Password:");
    scanf("%s",password);
	if(password_match(uid,password)){
		printf("Login Successful!\n");
		printf("Menu:\n1.View Details\n2.Add New Course\n3.Get Grade for a Specific Course\n4.Exit\n");
		struct Record Student;
		if(!load_info(uid,&Student)){
		      printf("No data avialable !\n");
		      return -1;
		      }
		int choice;
		printf("Enter choice:");
		scanf("%d",&choice);
        switch (choice) {
            case 1:
                view_details(&Student);
                break;
            case 2:
                add_course(&Student);
                break;
            case 3:
                get_grade(&Student);
                break;
            case 4:
                printf("Exiting...\n");
                return -1;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
	else{
		printf("Invalid Login Credentials!!\n");
	}
      
	return 0;
}
