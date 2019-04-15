#include<stdio.h>
int main()
{
    int x,y;
    float result;

    printf("Enter any two numbers:");
    scanf("%d %d",&x,&y);

    result=pow(x,y);  // x^y dhorbey
    printf("This is power:%.2f",result);

    getch();
}
