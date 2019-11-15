#include<stdio.h>
void main()
{
    int a[10],i,f,l,o,m,n;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter a key");
    scanf("%d",&o);
    f=0;
    l=n-1;
    while(f<=l)
    {
        m=(f+l)/2;
        if(a[m]==o)
        {
            printf("found at %d",m+1);
            break;
        }
        else if(o>a[m])
        {
            f=m+1;
        }
        else if(o<a[m])
        {
            l=m-1;
        }
    }
        if(f>l)
        {
            printf("not found");
        }
}

