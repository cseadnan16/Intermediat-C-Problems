#include<stdio.h>

int main()
{
    FILE *file;
    char ch[100];

    file = fopen("demo_test.txt", "r");

    if(file==NULL)
    {
        printf("File dose not exist.\n");
    }
    else
    {
        printf("File is opened.\n");

        fscanf(file,"%[^\n]s",ch);
        printf("\n%s\n", ch);
        fclose(file);
    }
    return 0;
}
