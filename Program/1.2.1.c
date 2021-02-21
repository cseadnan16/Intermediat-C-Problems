#include<stdio.h>

//char find_digit(char ch);
char find_digit(char ch)
{
    if(ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9')
        {
            return 1;
        }

    else
        return 0;
}

int main()
{
    char ch;

    printf("Please enter the character: ");
    //scanf("%c",&ch);
    ch = getchar();

    if(1==find_digit(ch))
    {
        printf("YES It's a digit.\n");
    }
    else
    {
        printf("NO It's not a digit.\n");
    }
    return 0;
}


