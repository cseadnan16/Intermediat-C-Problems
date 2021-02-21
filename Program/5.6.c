#include<stdio.h>
int main(){
    int n;
    printf("Please Enter the value n: ");
    scanf("%d",&n);

    if(n&1){
        printf("Number is odd\n");
    }else{
        printf("Number is even\n");
    }
    return 0;
}


