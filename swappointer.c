#include<stdio.h>
void main()
{
    int x,y,*a,*b,c;
    printf("enter two integer\n");
    scanf("%d,%d",&x,&y);
    printf("value x=%d,value of y=%d\n",x,y);
    a=&x;
    b=&y;
    c=*b;
    *b=*a;
    *a=c;
    printf("value x=%d,value of y=%d\n",x,y);
}
