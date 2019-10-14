#include<stdio.h>
void sum(int *,int *);
void main()
{
    int x,y,result,*p,*q;
    p=&x;
    q=&y;
    printf("enter two integer");
    scanf("%d,%d",&x,&y);
    sum(&x,&y);
}
void sum(int *p,int *q)
{
    int z;
    z=*p * *q;
    printf("result=%d",z);
}
