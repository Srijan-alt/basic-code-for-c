#include<stdio.h>
void main()
{
    int a[10],i;
    int *p;
    p=a;
    printf("enter\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",*(p+1));
        p++;
    }
}
