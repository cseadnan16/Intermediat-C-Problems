#include<stdio.h>
#include<string.h>

int main(){
    char digit[16];
    int i,count;
    printf("Enter any Binary Digit: ");
    scanf("%s",digit);
    //printf("Length = %d\n",strlen(digit));

    for(i=0,count=0;i<strlen(digit);i++){
        if(digit[i]=='1'){
            count++;
        }
    }
    printf("Total %d bit 1\n",count);

    return 0;
}
