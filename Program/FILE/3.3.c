#include<stdio.h>

int main()
{
    FILE *fp;
    char filename[]= "file_3.3.txt";

    fp = fopen(filename, "r");

    if(fp==NULL)
    {
        printf("NO..! File not is open.\n");
    }


    else
    {
        printf("YES..! File is open.\n");
        fprintf(fp, "This is a file created by my program! ");
        fprintf(fp,"I am so happy.\n");
        fclose(fp);

        fp = fopen(filename,"w");
        fprintf(fp,"\nSECOND LINE:\n");
        fprintf(fp,"I am also happy now.\n");
        //fclose(fp);
    }

    return 0;
}

