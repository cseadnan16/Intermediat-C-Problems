#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char name[20]= "I love my mother";
    int length = strlen(name);
    int i;

    fp = fopen("demo_test.txt", "w");

    if(fp==NULL)
    {
        printf("File dose not exist.\n");
    }
    else
    {
        printf("File is opend.\n");
        for(i=0;i<length;i++)
        {
           fputc(name[i],fp);   // fprintf(fp,"%c",name[i]);
        }
        printf("File is written Successfully.\n");
        fclose(fp);
    }
    return 0;
}
