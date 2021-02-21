#include<stdio.h>

int main(){
    struct student{
        int id;
        char name[40];
    };

    struct student one, two;

    one.id = 1;
    one.name = "Adnan Al Nowshad";

    printf("ID: %d\n",one.id);
    printf("Name: %s\n",one.name);

    return 0;
}
