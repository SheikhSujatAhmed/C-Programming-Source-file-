
 #include<stdio.h>
int main ()
{
    float a;
    float result;

    printf("Enter any number:");
    scanf("%f",&a);

    result=sin(a);
    printf("This is  value sin(%f):%.2f",a,result);

    getch();
}



