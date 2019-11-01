#include<stdio.h>
void main()
{
    int size;
    printf("enter the size of the shirt you want to wear");
    scanf("%d",&size);
    if (size>40)
    {
        if (size<50)
            printf("XL");
        else
            printf("XXL");
    }
    else
        printf("L");
}
