#include<stdio.h>

int main()
{
    FILE *file;
    char name[40];
    int i,student_number,age,mobile_no;

    file = fopen("demo_test.txt", "a");

    if(file==NULL)
    {
        printf("File dose not exist.\n");
    }
    else
    {
        printf("\t\tYes....File is opened.\n\n\n");
        printf("\t\tStudents details of 6th Semester.\n");
        printf("\nEnter the number of Students = ");
        scanf("%d",&student_number);

        for(i=1;i<=student_number;i++)
        {
            printf("\nName: ");
            scanf(" %[^\n]",name);

            printf("Age: ");
            scanf("%d",&age);

            printf("Mobile number: ");
            scanf("%d",&mobile_no);

            fprintf(file, "Name: %s\tAge: %d\tMobile number: %d\n",name,age,mobile_no);

        }
        fclose(file);
    }
    return 0;
}
