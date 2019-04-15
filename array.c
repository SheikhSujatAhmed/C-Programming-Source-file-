#include<stdio.h>
int main()
{
    int i,n,marks[100],sum=0;

    printf("Enter students number :");
    scanf("%d",&n);

    printf("Please enter marks :");

    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+marks[i];
    }
    printf("Total marks :%d\n",sum);
    printf("Avarage marks :%.2f\n",(float)sum/n);

    getch();
}
