#include<stdio.h>
int main()
{
    int num;
    char ch;
    double d_num;
    float f_num;

    printf("%lu\n",sizeof(double));
    printf("Size of char: %d\n",sizeof(ch));
    printf("Size of int: %d\n",sizeof(num));
    printf("Size of float: %d\n",sizeof(f_num));
    printf("Size of double: %d\n",sizeof(d_num));

    return 0;
}


