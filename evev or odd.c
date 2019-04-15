#include<stdio.h>
int main ()
{
    int num;

    printf("Enter any number:");
    scanf("%d",&num);

    if(num%2 == 0 )
        printf("This is even.");

    else // if (num != 0)
        printf("This is odd.");

    return 0;

}
