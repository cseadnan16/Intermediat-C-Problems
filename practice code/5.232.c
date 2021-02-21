#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file;
    char name[30];

    file = fopen("demo_test.txt", "a");

    if(file==NULL)
    {
        printf("File dose not exist.\n");
    }

    else
    {
        printf("File is opened.\n");
        printf("\nEnter your name: ");
        gets(name);
        fputs(name,file);
        fputs("\n", file);
        printf("File is written successfully.\n");
        fclose(file);
    }
    return 0;
}
