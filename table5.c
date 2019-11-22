#include<stdio.h>
void main()
{
    int b=1,result;
    do
    {
        result=5*b;
        printf("5*%d=%d\n",b,result);
        b++;
    }while(b<=12);
}
