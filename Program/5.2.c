#include<stdio.h>
int main(){
    int m,n,x;

    while(1){
        printf("Please Enter your number (0 to exit): ");
        scanf("%d",&n);
        if(n==0)break;

        printf("How many bits you want to shift left? ");
        scanf("%d",&x);

        m = n << x;

        printf("Result is %d\n\n",m);
    }

    return 0;
}

