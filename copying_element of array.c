#include<stdio.h>
int main()
{
    int i,n,array1[30],array2[30];

    printf("Enter any number:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("array1 :");

    for(i=0; i<n; i++)
    {
        printf("%d ",array1[i]);
    }

    for(i=0; i<n; i++)
    {
        array2[i]=array1[i] ;
    }
    printf("\narray2 :");


    for(i=0; i<n; i++)
    {
        printf("%d ",array2[i]);

    }
    printf("%d",array2[i]);

    getch();

}
