#include<stdio.h>

void plus_ten1(int a){
    a = a+10;
    //printf("a = %d\n",a);
}

void plus_ten2(int* a){
    *a = (*a)+10;
     //printf("a = %d\n",a);
}

int main()
{
    int a=5;

    plus_ten1(a);
    printf("a = %d\n",a);

    plus_ten2(&a);
    printf("a = %d\n",a);

    return 0;
}
