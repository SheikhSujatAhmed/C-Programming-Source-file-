#include<stdio.h>
int main()
{
    int choice;
    float F,C;

    printf("Temperature convert menu: \n");
    printf("1. convert fahrenheit to celsious.\n");
    printf("2. convert celsious to fahrenheit. \n");

    printf("Enter 1 or 2 :- \n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            printf(" Enter fahrenheit temperature:\n");
            scanf("%f",&F);
            C=(F-32)/1.8;
            printf("The temperature celsious is :%f",C);
            break;
        }
    case 2:
        {
             printf(" Enter celsious temperature:\n");
            scanf("%f",&C);
            F=(1.8*C)+32;
            printf("The temperature fahrenheit is :%f",F);
            break;

        }
        default:
        printf("not correct input !!!");
    }
        return 0;
}
