#include<stdio.h>
void main()
{
    int a[10],i,n,b[10];
    printf("enter the no. of rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[n-i-1]=a[i];
    }
    for(i=0;i<n;i++)
    {
    printf("%d",b[i]);
    }
}
