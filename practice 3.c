#include<stdio.h>
void main()
{
    int *p,a[5],i,j,u;
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<5-1;i++)
    {
        for(j=0;i<5-2;j++)
        {
            if(*p>*(p+1))
            {
                u=*p;
                *p=*(p+1);
                *(p+1)=u;
            }
        }
    }
    for(i=0;i<5;i++)
    printf("%d",a[i]);
}
