#include<stdio.h>
int main()
{
    FILE *adnan;
    char file_name[]="my_text_book.txt";

    adnan = fopen(file_name,"w");

    //fprintf(adnan,"My name is nowshad.");

    if(adnan==NULL)
    {
        printf("NO..! File not is Open.\n");
    }
    else
    {
        printf("YES..! File is Open.\n");
        fprintf(adnan,"My name is MD.Nowshad.");
        fclose(adnan);
    }

    return 0;
}
