#include<stdio.h>
int main()
{
    int r,c;
    int array[4][5];

    printf("Enter sum numbers :");
     for(r=0;r<4;r++)
    {
        for(c=0;c<5;c++)
        {
            scanf("%d",&array[r][c]);
        }
          printf("\n");
    }

    for(r=0;r<4;r++)
    {
        for(c=0;c<5;c++)
        {
            printf("%d ",array[r][c]);
        }
        printf("\n");
    }
    getch();
}
