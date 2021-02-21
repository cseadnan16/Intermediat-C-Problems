#include<stdio.h>

int f_calls = 0;

int sum(int n)
{
    f_calls = f_calls+1;

    if(n==0)
    {
        return 0;
    }
    return n+sum(n-1);
}

int main()
{
    int n;

    printf("Please enter the value of n: ");
    scanf("%d",&n);

    if(n<1)
    {
        printf("Undefined\n");
        return 0;
    }

    printf("\nSum of %d is %d\n",n,sum(n));
    printf("Number of function calls: %d\n",f_calls);

    return 0;
}


