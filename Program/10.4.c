#include<stdio.h>
#define DEBUG 0

int add(int a, int b){
    return a+b;
}

int main(){
    int i, length, sum = 0, tmp;

    printf("Enter number of integers: ");
    scanf("%d",&length);
    if(DEBUG)
        printf("----\nDEBUG\n\tNumber of integers: %d\nENDDEBUG\n----\n", length);

    for(i=0;i<length;i++){
        printf("Enter the number %d: ",i+1);
        scanf("%d",&tmp);
        if(DEBUG)
            printf("----\nDEBUG\n\tNumber %d: %d\nENDDEBUG\n----\n",i+1, tmp);

        sum = add(sum, tmp);
        if(DEBUG)
            printf("----\nDEBUG\n\tCurrent Sum: %d\nENDDEBUG\n----\n", sum);

    }

    //printf("The sum value: %d\n",sum);
    printf("The average is %lf\n", (double)sum/length);
    return 0;
}
