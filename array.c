#include<stdio.h>
void main()
{
    int i=0,array[i];
    for(i;i<=9;i++)
    {
        printf("enter a no.\n");
        scanf("%d",&array[i]);
        if(array[i]%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
}
