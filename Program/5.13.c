#include<stdio.h>

int main(){

    int ara[]={1,1,2,3,4,5,6,7};
    int i,n=8;

    for(i=0;i<n;i++){
        if(i+1 != ara[i]){
            ara[i] = i+1;
            //printf("Missing Number: %d\n",ara[i]);
        }
    }
    printf("Missing Number: %d\n",ara[i-1]);
    return 0;

}
