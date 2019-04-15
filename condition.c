#include<stdio.h>
int main()
{
    int n;
    printf("please enter a number:");
    scanf("%d",&n);

    if(n>=1 || n<=10)
        {
        printf("Yes \n");
        }
    else
        {
        printf("NO \n");
        }
        return 0;
}
