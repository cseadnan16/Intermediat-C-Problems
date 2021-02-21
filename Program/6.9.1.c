#include<stdio.h>

typedef struct{
    int p;
    int q;
}rational;

void func(float a, float b, float c, float d){
    float sum,sub,mul,div;

    sum = ((a/b)+(c/d));
    printf("\nSummation = %f\n",sum);

    sub = ((a/b)-(c/d));
    printf("Substraction = %f\n",sub);

    mul = ((a/b)*(c/d));
    printf("Multiplication = %f\n",mul);

    div = ((a/b)/(c/d));
    printf("Divided = %f\n",div);
}
void func1(float a, float b, float c, float d){
    if((a/b)==(c/d)){
        printf("\nYour two rational value is equal.\n");
    }else{
        printf("\nYour two rational value is not equal.\n");
    }
}

int main(){
    rational x,y;
    int temp,temp1,gcd,gcd1;
    int a,b,c,d;

    printf("Enter value p of x: ");
    scanf("%d",&x.p);
    printf("Enter value q of x: ");
    scanf("%d",&x.q);
    printf("\nEnter value p of y: ");
    scanf("%d",&y.p);
    printf("Enter value q of y: ");
    scanf("%d",&y.q);

    a=x.p, b=x.q, c=y.p, d=y.q;

    if(x.q==0 || y.q==0){
        printf("\nSorry !\n");
    }
    else
    {
        while(x.q!=0){
            temp = x.q;
            x.q = x.p % x.q;
            x.p = temp;
            gcd = x.p;
        }
        while(y.q!=0){
            temp1 = y.q;
            y.q = y.p % y.q;
            y.p = temp1;
            gcd1 = y.p;
        }
        //printf("\nGCD of variable x = %d\n",gcd);
        //printf("GCD of variable y = %d\n",gcd1);
        if(gcd==gcd1==1){
            func(a,b,c,d);
            func1(a,b,c,d);
        }else{
            printf("\nSorry your GCD value not equal one(1).\n");
        }
    }
    return 0;
}
