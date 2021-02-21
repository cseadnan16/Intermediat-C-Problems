#include<stdio.h>

int main()
{
    FILE *fp;
    char filename[] = "my_file_1.txt";

    fp = fopen(filename, "w");


    if(fp==NULL)
    {
        printf("NO..! File not is Open.\n");
    }
    else
    {
        printf("YES..! File is Open.\n");
        fprintf(fp,"This is a file created by my program!");
        fprintf(fp,"I am so happy.\n");
        fclose(fp);
        fprintf(fp,"Second line.\n");
    }


    return 0;
}
