#include<stdio.h>
#include<string.h>

struct name_type{
    char first[20],last[20];
};

struct student{
    int id;
    struct name_type name;
};

int main(){
    struct student one;

    scanf("%d",&one.id);
    scanf(" %[^\n]",one.name.first);
    scanf(" %[^\n]",one.name.last);

    printf("\nID: %d\n",one.id);
    printf("Name: %s %s\n",one.name.first,one.name.last);

    return 0;
}

