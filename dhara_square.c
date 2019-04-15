#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Please enter any numbers :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }

    printf("1^2+2^2+3^2+......+n^2=%d",sum);

    getch();
}
