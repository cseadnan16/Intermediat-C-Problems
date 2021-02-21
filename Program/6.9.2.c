#include<stdio.h>
#include<string.h>
#define array_size 2

typedef struct{
    int date;
    int month;
    int year;
}date_of_birth;

typedef struct{
    char voter_name[40];
    char fathers_name[40];
    char mothers_name[40];
}name_type;

typedef struct{
    name_type name;
    date_of_birth dob;
    char nid_no[20];
}id_type;

int main(){
    id_type id[array_size];
    int i;

    //Data input.
    for(i=0;i<array_size;i++){
        printf("Voter Name: ");
        scanf(" %[^\n]s",id[i].name.voter_name);

        printf("Father: ");
        scanf(" %[^\n]s",id[i].name.fathers_name);

        printf("Mother: ");
        scanf(" %[^\n]s",id[i].name.mothers_name);

        printf("Enter Birth Date, Month & Year: ");
        scanf("%d%d%d",&id[i].dob.date,&id[i].dob.month,&id[i].dob.year);

        printf("Enter NID No: ");
        scanf(" %[^\n]s",id[i].nid_no);

        printf("\n");
    }



    for(i=0;i<array_size;i++){
        printf("Government of the People's Republic of Bangladesh\n");
        printf("Voter Name: %s\n",id[i].name.voter_name);
        printf("Father: %s\n",id[i].name.fathers_name);
        printf("Mother: %s\n",id[i].name.mothers_name);
        printf("Birth Date: %d %d %d\n",id[i].dob.date,id[i].dob.month,id[i].dob.year);
        printf("NID No: %s\n",id[i].nid_no);
        printf("\n");
    }

    return 0;
}
