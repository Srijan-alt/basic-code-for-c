#include<stdio.h>
int sum(int[]);
void main()
{
    int i,a[5],s;
    printf("enter");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    s=sum(a);
    printf("%d",s);
}
int sum(int a[])
{
    int i,s=0;
    for(i=0;i<5;i++)
    {
    s=s+a[i];
    }
    return (s);
}
