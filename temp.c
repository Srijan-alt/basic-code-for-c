#include<stdio.h>
void main()
{
    float c,f;
    int a;
    printf("enter 1 for f to c or 2 to for c to f");
    scanf("%a",&a);
    if (a==1)
    {
        printf("enter the temp in f \n");
        scanf("%f",&f);
        c=32*f-32;
        printf("the temp in c is %f \n",c*(5/9));
    }
    else
    {
        printf("enter the temp in c \n");
        scanf("%f",&c);
        f=c*(9/5)+32;
        printf("the temp in f is %f \n",f);
    }
}
