#include<stdio.h>
int main()
{
    int i,n,num[100];

    printf("Enter any number :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

   int max=num[0];
   for(i=1;i<n;i++)
   {
       if(num[i]>max)

           max=num[i];
   }
    printf("maximus = %d",max);

}
