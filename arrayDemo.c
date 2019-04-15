#include<stdio.h>
int main()
{
    float avrg,sum=0;

    int i,marks[5];
    printf("Enter marks :");

    for(i=0;i<=4;i++)
    {

        scanf("%d",&marks[i]);
    }
    for(i=0;i<=4;i++)
    {
        sum=sum+marks[i];
         avrg=sum/5;
    }
        printf("Sum = %f \n ",sum);
        printf("The average marks : %.2f",avrg);


    getch();
}
