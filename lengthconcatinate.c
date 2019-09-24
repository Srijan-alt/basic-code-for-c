#include<stdio.h>
void main()
{
    char a[20],b[20],c[40];
    int i=0,j=0;
    printf("enter a string\n");
    gets(a);
    printf("enter second string\n");
    gets(b);
    i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    printf("length is %d",i);
    printf("\n");
    i=0;
    while(a[i]!='\0')
    {
        c[i]=a[i];
        i++;
    }
    while(b[j]!='\0')
    {
        c[i+j]=b[j];
        j++;
    }
    puts(c);
}
