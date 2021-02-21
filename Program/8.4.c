#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i,n;
    time_t t;
    srand((unsigned) time(&t));

    /*for(i=0;i<6;i++){
        printf("%d\n",rand());
    }*/
    n = rand()%100;
    printf("\n%d\n",n+1);

    return 0;
}



