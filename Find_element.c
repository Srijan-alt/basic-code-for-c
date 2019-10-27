#include<stdio.h>
void main()
{
    int *p,i,a[10],key,flag=0;
    printf("enter\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    p=a;
    printf("enter the key");
    scanf("%d",&key);
    for(i=0;i<5;i++)
    {
        if(key==*p)
        {
        flag++;
        break;
        }
        p++;

    }
        if(flag==0)
            printf("elemet not found");
        else
        printf("elemnt found at %d",i+1);
}
