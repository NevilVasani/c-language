//Develop a program to perform Addition,Subtraction, Multiplication and Division of 2numbers as per user’s choice.

#include<stdio.h>

int main()
{
    char oparator;
    float i,j;

    printf("enter the opretions (+,-,*,/)\n");
    scanf("%c",&oparator);

    printf("enter the two numbers :\n");
    scanf("%f %f",&i,&j);

    switch(oparator)
    {
        case '+':
            printf("%f+%f=%f",i,j,i+j);
            break;

        case '-':
            printf("%f-%f=%f",i,j,i-j);
            break;

        case '*':
            printf("%f*%f=%f",i,j,i*j);
            break;

        case '/':
            printf("%f/%f=%f",i,j,i/j);
            break;

        default:
            printf("error!!!!!!!");



    }

return 0;
}
