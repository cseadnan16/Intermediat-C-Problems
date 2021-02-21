#include<stdio.h>

int main()
{
    FILE *fp;
    char filename[]="file_3.3.2.txt";

    fp=fopen(filename,"w");

    if(fp==NULL)
    {
        printf("File not is open.\n");
    }
    else
    {
        printf("File is open.\n");
        fprintf(fp,"But me no buts.\n");
        fclose(fp);

        fp=fopen(filename,"r");
        fprintf(fp,"\nSECOND LINE:\n");
        fprintf(fp,"I am not a perfect man.\n");
        fclose(fp);
    }
    return 0;
}

