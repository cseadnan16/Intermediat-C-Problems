#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *file;
    char *input_file = "anabiya.jpg";

    file = fopen(input_file, "rb");
    if(file==NULL)
    {
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    fseek(file,0,SEEK_END);

    printf("File size: %ld bytes\n", ftell(file));
    printf("File size (KiloByte): %ld\n", ftell(file)/1024);

    fclose(file);

    return 0;
}
