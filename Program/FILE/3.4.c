#include<stdio.h>

int main()
{

    FILE *fp_in, *fp_out;
    char *iput_file = "in.txt";
    char *output_file = "out.txt";
    int num1,num2,sum;

    fp_in = fopen(iput_file, "r");
    fp_out = fopen(output_file, "w");

    if(fp_in && fp_out==NULL)
    {
        printf("File dose not exist.\n");
    }
    else
    {
        printf("Yes...! File is opened.\n");

        fscanf(fp_in, "%d %d",&num2,&num1);
        //fscanf(fp_in, "%d",&num2);

        sum = num1+num2;

        printf("\n%d + %d = %d\n", num1,num2,sum);
        fprintf(fp_out, "Summation value is = %d\n",sum);

        fclose(fp_in);
        fclose(fp_out);
    }
    return 0;
}


