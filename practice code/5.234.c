#include<stdio.h>

int main()
{
    FILE *file;
    char ch;
    file = fopen("demo_test.txt", "r");

    if(file==NULL)
    {
        printf("File dose not exist.\n");
    }
    else
    {
        printf("File is opened.\n");
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }
        fclose(file);
    }
    return 0;
}
