#include<stdio.h>
#include<string.h>

typedef struct{
    char first[20],last[20];
}nametype;

 typedef struct {
    char id[15];
    nametype name;
}Student_type;

int main()
{
    Student_type student[5];
    int i,n=5;

    for(i=0;i<n;i++){
        printf("Enter the ID for student %d: ",i+1);
        scanf("%s",student[i].id);
        printf("Enter the first name for student %d: ",i+1);
        scanf("%s",student[i].name.first);
        printf("Enter the last name for student %d: ",i+1);
        scanf("%s",student[i].name.last);
        printf("\n");
    }

    printf("Output: \n\n");

    for(i=0;i<n;i++){
        printf("\nID: %s\n",student[i].id);
        printf("Name: %s %s\n",student[i].name.first,student[i].name.last);
    }

    return 0;
}
