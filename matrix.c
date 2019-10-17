#include<stdio.h>
void main()
{
    int A[3][3],B[3][3],C[3][3];
    int i,j,k=0;
    printf("Enter values of first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter values of second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           // C[i][j]=0;
            for(k=0;k<3;k++)
                {
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
                }
                printf("%d",C[i][j]);
                printf("\t");
        }
        printf("\n");
    }
}

