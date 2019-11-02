#include <stdio.h>
void main()
{
    float a,b;
    printf("enter the temp you wish to convert to fahrenheit");
    scanf("%f",&a);
    b = (float)(a*9/5)+32;
    printf("the temp if fahrenheit is %f",b);
}
