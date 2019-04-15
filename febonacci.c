#include<stdio.h>
int main()
{
    int i, n, F0=0,F1=1,Febo;

    printf("There are febonacci numbers :");
    scanf("%d",&n);

    for( i=1; i<=n; i++ )
    {
        Febo=F0+F1;
        printf("%d ",Febo);

        F1=F0;
        F0=Febo;
    }

    getch();
}
