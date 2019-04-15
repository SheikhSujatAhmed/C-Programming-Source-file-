#include<stdio.h>
int main()
  {
    int num[100]={12,23,34,45,67,78,89,55,45,36,76,19,37,12,33,44,65 };
    int i,n, value ,position=-1;

    printf("Please enter any number in 10 that has competitive :");
    scanf("%d",&n);


    printf("Please value : ");
    scanf("%d ",&value);

    for(i=0; i<n; i++)
    {
        if(value == num[i])
        {
            pos = i+1;
        break;
        }
    }
    if(position = -1)
        printf("Not found ! \a");
    else
        printf("the value of %d is found and position : %d \n ", value,pos);

    getch();
  }
