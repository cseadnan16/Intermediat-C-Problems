#include<stdio.h>
#include<conio.h>

int factorial(int n)
{
    static int f_calls = 1;
    if(n==0)
    {
        printf("Function call = %d\n",f_calls);
        return 1;
    }

    f_calls = f_calls+1;
    return n*factorial(n-1);
}

int main()
{
    int n;

    printf("Please enter the value of n: ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Undefined\n");
        return 0;
    }

    printf("\nFactorial of %d is %d\n",n,factorial(n));

    //return 0;
    getch();
}
