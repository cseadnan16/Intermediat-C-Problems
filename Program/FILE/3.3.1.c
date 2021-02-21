#include<stdio.h>

int main()
{
    FILE *fp;
    char filename[] = "file_3.3.1.txt";

    fp = fopen(filename,"w");

    if(fp==NULL)
    {
        printf("File not is open.\n");
    }
    else
    {
        printf("Yes...File is open.\n");
        fprintf(fp, "I am a lecturer in ICT.\n" );
        fclose(fp);

        fp = fopen(filename,"w");
        fprintf(fp,"\nSECOND LINE:\n");
        fprintf(fp,"All that glitters is not gold.\n");
        fclose(fp);
    }
    return 0;
}
