#include<stdio.h>
#include<limits.h>

int main(){
    int i,num,count=0;
    int n = sizeof(int)*CHAR_BIT;

    printf("Enter any Decimal Number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        if(num&(1<<i))
            count++;
    }

    printf("Number of 1: %d\n",count);

    return 0;
}

