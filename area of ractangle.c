#include<stdio.h>
int main ()
{
    float dhar1,dhar2,dhar3,periperal,area;

    printf("Enter any three dharr:");
    scanf("%f %f %f",&dhar1,&dhar2,&dhar3);

    periperal=(dhar1+dhar2+dhar3)/2;
    printf("this is porisima=%.2f\n",periperal);

    area=sqrt (periperal*(periperal-dhar1)*(periperal-dhar2)*(periperal-dhar3));
     printf("Result of area_triangle=%.2f",area);

     return 0;

}
