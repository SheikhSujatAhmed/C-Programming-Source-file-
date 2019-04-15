#include<stdio.h>
int main ()
{
    int a;
    float result;

    printf("Enter any number:");
    scanf("%d",&a);

    result=abs(a);
    printf("This is absolute value:%.2f",result);

    return 0;
}
