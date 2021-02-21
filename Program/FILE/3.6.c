#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *file_in, *file_out;
    char *input_file = "ana.jpg";
    char *output_file = "anabiya.jpg";
    int ch;

    file_in= fopen(input_file, "rb");
    if(file_in==NULL)
    {
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    file_out = fopen(output_file, "wb");

    while(1)
    {
        ch = fgetc(file_in);
        if(ch==EOF)
        {
            break;

        }
        fputc(ch, file_out);
    }

    fclose(file_in);
    fclose(file_out);

    return 0;
}
