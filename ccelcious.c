#include<stdio.h>
int main()
{
    float F,C;

    printf("Enter Frnht=");
    scanf("%f",&F);

    C=(F-32)/1.8;
    printf("This is Celcious: %.2f",C);

    return 0;
}

