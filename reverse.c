#include<stdio.h>
void main()
{
    char a[20],k;
    int i=0,j=0,l=0;
    gets(a);
    while(a[i]!='\0')
    {
        i++;
    }
    j=i/2;
    while(l<j)
    {
        k=a[l];
        a[l]=a[i-1-l];
        a[i-1-l]=k;
        l++;
    }
    puts(a);
}
