#include<stdio.h>
void main()
{
    int m,k;
    printf("enter a number");
    scanf("%d",&m);
    while(m!=0)
    {
        k=m%10;
        printf("%d",k);
        m=m/10;
    }
}
