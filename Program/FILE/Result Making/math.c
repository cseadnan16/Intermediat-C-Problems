#include<stdio.h>

int main()
{
    FILE *file_bangla,*file_english,*file_math,*file_avg;
    int roll,i,bangla,english,math,student_number,highest_number, lowest_number;

    float avg;

    file_bangla = fopen("Bangla.txt", "w");
    fprintf(file_bangla, "\n\n\t\t  Number of students received in Bangla.\n\n");
    fprintf(file_bangla, "\t\t-----------------------------------------\n");

    file_english = fopen("English.txt", "w");
    fprintf(file_english, "\n\n\t\t Number of students received in English.\n\n");
    fprintf(file_english, "\t\t-----------------------------------------\n");

    file_math = fopen("Math.txt", "w");
    fprintf(file_math, "\n\n\t\tNumber of students received in Mathematics.\n\n");
    fprintf(file_math, "\t\t-----------------------------------------\n");

    file_avg = fopen("Average.txt","w");
    fprintf(file_avg, "\n\n\t\t Average score of all subject matter of students.\n\n");
    fprintf(file_avg, "\t\t-----------------------------------------------------------------------------------------------\n");

    printf("Enter the number of Students: ");
    scanf("%d",&student_number);

    printf("Enter the starting roll: ");
    scanf("%d",&i);

    highest_number = 0;
    lowest_number = 0;
    for(roll=i;roll<student_number+i;roll++)
    {
        printf("\nROLL = %d",roll);


        printf("\nBangla: ");
        scanf("%d",&bangla);

        printf("English: ");
        scanf("%d",&english);

        printf("Math: ");
        scanf("%d",&math);

        avg = (bangla+english+math)/3;

        fprintf(file_bangla, "\t\tRoll no:%d\t----------\tNumber:%d\n",roll,bangla);
        fprintf(file_english, "\t\tRoll no:%d\t----------\tNumber:%d\n",roll,english);
        fprintf(file_math, "\t\t Roll no:%d\t----------\tNumber:%d\n",roll,math);

        if(avg>32)
        {
                if(avg>=33 && avg<=39)
                {
                    fprintf(file_avg, "\t\tRoll no:%d  ----------  Average number:%0.2f  ----  GPA: 1.0  --------  Grade: D  -------  Passed\n",roll,avg);
                }
                else if(avg>=40 && avg<49)
                {
                    fprintf(file_avg, "\t\tRoll no:%d  ----------  Average number:%0.2f  ----  GPA: 2.0  --------  Grade: C  -------  Passed\n",roll,avg);
                }
                else if(avg>=50 && avg<59)
                {
                    fprintf(file_avg, "\t\tRoll no:%d  ----------  Average number:%0.2f  ----  GPA: 3.0  --------  Grade: B  -------  Passed\n",roll,avg);
                }
                else if(avg>=60 && avg<69)
                {
                    fprintf(file_avg, "\t\tRoll no:%d  ----------  Average number:%0.2f  ----  GPA: 3.5  --------  Grade: A- -------  Passed\n",roll,avg);
                }
                else if(avg>=70 && avg<79)
                {
                    fprintf(file_avg, "\t\tRoll no:%d  ----------  Average number:%0.2f  ----  GPA: 4.0  --------  Grade: A  -------  Passed\n",roll,avg);
                }
                else if(avg>=80 && avg<=100)
                {
                    fprintf(file_avg, "\t\tRoll no:%d  ----------  Average number:%0.2f  ----  GPA: 5.0  --------  Grade: A+ -------  Passed\n",roll,avg);
                }
        }

        else
        {
            fprintf(file_avg, "\t\tRoll no:%d  ----------  Average number:%0.2f  ----  GPA: 0.0  --------  Grade: F  -------  Fail\n",roll,avg);
        }



        if(avg>highest_number)
        {
            highest_number = avg;
        }

        else
        {
            highest_number = highest_number;
        }
    }
    fprintf(file_avg, "\n\n\n\t\tHighest mark = %d\n",highest_number);
    fprintf(file_avg, "\t\tLowest mark = %d\n",lowest_number);

    fclose(file_bangla);
    fclose(file_english);
    fclose(file_math);
    fclose(file_avg);

    return 0;
}
