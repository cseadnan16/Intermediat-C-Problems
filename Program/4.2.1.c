
#include<stdio.h>

int x = 1;

void myfnc(int z)
{
    z = z*2;
    x = x-10;
    printf("myfnc: x = %d, z = %d\n",x,z);
}
int main()
{
    int y = 10;

    x = 20;

    myfnc(y);
    printf("main: x = %d, y = %d\n",x,y);

    return 0;
}
