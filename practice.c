#include<stdio.h>
#include<string.h>
void main()
{
    int max,min,a[10],i,j;
    int *p;
    printf("enter\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    p=a;
    for(i=0;i<10;i++)
    {
        if(max<*p)
            max=*p;
        if(min>*p)
            min=*p;
        p++;
    }
    printf("max-%d,min-%d\n",max,min);

    for(i=0;i<10;i++)
    {
        if(*p==max)
        printf("%d",p);
        p++;
        break;
    }
}
