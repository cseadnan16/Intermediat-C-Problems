#include<stdio.h>

struct s1{
    int n;
    double d;
    char c;
}s1;

struct s2{
    char c1;
    int n;
    char c2;
    double d;
    char c3;
    char c4;
    /*char c5;
    char c6;
    char c7;
    char c8;
    char c9;
    char c10;
    char c11;*/
}s2;

int main(){
    printf("char size : %lu bytes\n",sizeof(char));
    printf("int size : %lu bytes\n",sizeof(int));
    printf("double size : %lu bytes\n",sizeof(double));

    printf("s1 size : %lu\n",sizeof(s1));
    printf("s2 size : %lu\n",sizeof(s2));

    return 0;
}
