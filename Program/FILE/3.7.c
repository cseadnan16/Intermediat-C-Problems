#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *file = fopen("in.txt", "r");
    if(file==NULL)
    {
        perror("Can't open file");
        return EXIT_FAILURE;
    }

    int ch;

    ch = fgetc(file);
    printf("%c\n",(char) ch);
    ch = fgetc(file);
    printf("%c\n",(char)ch);

    fseek(file,sizeof(char)*5,SEEK_CUR);
    ch = fgetc(file);
    printf("%c\n",(char)ch);

    fclose(file);

    return 0;
}

