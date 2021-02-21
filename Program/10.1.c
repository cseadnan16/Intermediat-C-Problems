#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int main(){
    int length, i,temp, sum=0;

    printf("Enter the number of integers: ");
    scanf("%d",&length);

    for(i=0;i<length;i++){
        printf("Enter the number %d: ",i+1);
        scanf("%d",&temp);
        sum = add(sum, temp);

    }

    //printf("The sum value: %d\n",sum);
    printf("The average is %lf\n", (double)sum/length);
    return 0;
}
