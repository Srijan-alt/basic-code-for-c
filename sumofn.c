#include<stdio.h>
void main()
{
    int i=1,sum=0,n;
    printf("enter the number");
    scanf("%d",n);
    do
    {
        sum=sum+i;
        i++;
    }while(i!=n);
    printf("the sum is %d",sum);
}
