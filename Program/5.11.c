#include<stdio.h>

int main(){

    int m,n;

    printf("Enter the value m & n: ");
    scanf("%d%d",&m,&n);

    if(m^n){
        puts("Number are not equal.\n");
    }else{
        puts("Number are equal.\n");
    }

    return 0;
}


