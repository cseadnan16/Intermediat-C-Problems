#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file;
    char name[30];
    int age;

    file = fopen("demo_test.txt", "a");

    if(file==NULL)
    {
        printf("File dose not open.\n");
    }

    else
    {
        printf("File is opened.\n");
        printf("\nEnter your name: ");
        //scanf("[^\n]",name);
        gets(name);

        printf("Enter your age: ");
        scanf("%d",&age);

        fprintf(file,"Name: %s\nAge: %d\n\n",name,age);
        //fprintf(file, "\n");
        printf("\nFile is written successfully..!\n");
        fclose(file);
    }
    return 0;
}
