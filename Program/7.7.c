#include<stdio.h>

int main(){
    char *p, a = 10 ;
    int *q, b = 'F';
    double *r, c = 302.64;

    p = &a;
    q = &b;
    r = &c;

    printf("Size of char: %d byte\n", sizeof(char));
    printf("p : %p\n",p);
    printf("p+1 : %p\n",p+1);
    printf("p+2 : %p\n",p+2);

    printf("\nSize of int: %d byte\n", sizeof(int));
    printf("q : %d\n",q);
    printf("q+1 : %d\n",q+1);
    printf("q+2 : %d\n",q+2);

    printf("\nSize of double: %d byte\n", sizeof(double));
    printf("r : %d\n",r);
    printf("r+1 : %d\n",r+1);
    printf("r+2 : %d\n",r+2);

    return 0;
}

