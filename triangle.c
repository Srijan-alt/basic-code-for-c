#include<stdio.h>
void main()
{
    int i,j,k,s=5,a=1;
    for(i=0;i<6;i++)
    {
        for(j=0;j<s+1;j++)
        {
            printf("  ");
            s--;
        }
        for(k=0;k<(2*i-1);k++)
        {
            printf("%d",a);
            a++;
        }
        a=1;
        printf("\n");
    }
}
