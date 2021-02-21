#include<stdio.h>
#include<string.h>
#define array_size 1

typedef struct{
    char first[20],last[20];
}nametype;

 typedef struct {
    char id[15];
    nametype name;
    char grade[3];
}Student_type;

void calculate_grade(Student_type *s, int mark){
    if(mark>=80){
       strcpy(s->grade, "A+");
    }else if(mark>=70){
        strcpy(s->grade,"A");
    }else if(mark>=60){
        strcpy(s->grade,"A-");
    }else if(mark>=50){
        strcpy(s->grade,"B");
    }else if(mark>=40){
        strcpy(s->grade,"C");
    }else{
        strcpy(s->grade,"F");
    }
}

int main()
{
    Student_type student[array_size];
    int i;
    int marks[]={86,82,60};

    for(i=0;i<array_size;i++){
        printf("Enter the ID for student %d: ",i+1);
        scanf("%s",student[i].id);
        printf("Enter the first name for student %d: ",i+1);
        scanf(" %[^\n]",student[i].name.first);
        printf("Enter the last name for student %d: ",i+1);
        scanf(" %[^\n]",student[i].name.last);
        //strcpy(student[i].grade, "");
        printf("\n");
    }

    for(i=0;i<array_size;i++){
        calculate_grade(&student[i],marks[i]);
    }
    printf("Output: \n\n");

    for(i=0;i<array_size;i++){
        printf("ID: %s\n",student[i].id);
        printf("Name: %s %s\n",student[i].name.first,student[i].name.last);
        printf("Grade: %s\n",student[i].grade);
        printf("\n");
    }

    return 0;
}

