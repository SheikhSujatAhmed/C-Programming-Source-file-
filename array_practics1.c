#include<stdio.h>
int main()
{
    int i,marks[30],sum=0;
    printf("Enter marks :");

    for( i=0; i<5; i++ )
    {
        scanf("%d",&marks[i]);

    }
    for( i=0; i<5; i++ )
    {
        sum = sum + marks[i];
    }
    printf("sum = %d \n",sum);
    printf("avarage = %.2f \n",(float)sum/5);

    return 0;

}
