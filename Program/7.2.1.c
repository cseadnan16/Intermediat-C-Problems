#include<stdio.h>
#include<stdlib.h>

int main(){
    int *marks;
    int i,n;

    printf("Please enter the number of students: ");
    scanf("%d",&n);

    //now allocate memory
    marks = (int *) calloc(sizeof(int) , n);

    if(marks==NULL){
        printf("Memory allocation failed for marks.\n");
        return 1;
    }

    /*printf("Enter the marks for each students:\n");
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }*/

    printf("Now here you can see the values:\n");
    for(i=0;i<n;i++){
        printf("%d\n",marks[i]);
    }

    //now free the memory.
    free(marks);

    return 0;

}


