#include<stdio.h>
int main()
{
    int i,j,rows,coloms;
    int A[10][10],B[10][10],C[10][10];

    printf("Enter any rows and coloms :");
    scanf("%d %d",&rows,&coloms);
    printf("\n\n");



     //printing A elements :
    printf("Enter A elements: \n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<coloms; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);

        }
         printf("\n");

    }


      //printing B elements:
      printf("Enter B elements: \n");

     for(i=0; i<rows; i++)
    {
        for(j=0; j<coloms; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);

        }
         printf("\n");
    }


    // Outputing A elements:
    printf("A = \n");

     for(i=0; i<rows; i++)
    {
        for(j=0; j<coloms; j++)
        {
            printf("\t");
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }


     //Outputing B elements:
    printf("B = \n");
     for(i=0; i<rows; i++)
    {
        for(j=0; j<coloms; j++)
        {
             printf("\t");
            printf("%d ",B[i][j]);

        }
        printf("\n");
    }


    // Adding A + B :
       for(i=0; i<rows; i++)
    {
        for(j=0; j<coloms; j++)
        {
           C[i][j]= A[i][j] + B[i][j];

        }

    }
    printf("\n\n");

    //Outputing additing:
    printf("A + B = \n");
     for(i=0; i<rows; i++)
    {
        for(j=0; j<coloms; j++)
        {

            printf("%d ",C[i][j]);

        }
        printf("\n");
    }

    getch();
}

