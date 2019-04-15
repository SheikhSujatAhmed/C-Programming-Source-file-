#include<stdio.h>
int main()
{
    int a=15,b=20,sum;
    int *poin1,*poin2;

    poin1=&a;
    poin2=&b;

    sum=*poin1 + *poin2;
    printf("The point of sum is: %d",sum);

    getch();
}
