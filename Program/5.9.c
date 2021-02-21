#include<stdio.h>


int main(){
    //char n;
    int i,n,count=0;
    printf("Enter any Decimal Number: ");
    scanf("%d",&n);

    while(n){
        if(n&1)count++;
        n = n >> 1;
    }

    printf("Number of 1: %d\n",count);

    return 0;
}

