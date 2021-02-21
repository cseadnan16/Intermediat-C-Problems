#include<stdio.h>
#include<string.h>

int main()
{
    char n[]="Bangladesh" ;
    int i,length;

    length = strlen(n);

    for(i=length-1;i>=0;i--)
    {
        printf("%c",n[i]);
    }

    //printf("\nFactorial of %d is %d\n",n,factorial(n));
    //printf("Number of function calls: %d\n",f_calls);

    return 0;
}


