#include<stdio.h>

int main(){
    FILE *header;
    char header_name[] = "dimik.h";

    header = fopen(header_name, "w");
    //fprintf(header, "I love my country");

    fclose(header);
    return 0;
}
