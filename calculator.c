#include<stdio.h>
void main()
{
    char open;
    float open1,open2;
    float result;
    printf("enter the operator form (+,-,*,/)");
    scanf("%c",&open);
    switch (open)
    {
        case '+':
        printf("enter two number");
        scanf("%f,%f",&open1,&open2);
        result=open1+open2;
        printf("the result is %f",result);
        break;

        case '-':
        printf("enter two number");
        scanf("%f,%f",&open1,&open2);
        result=open1-open2;
        printf("the result is %f",result);
        break;

        case '*':
        printf("enter two number");
        scanf("%f,%f",&open1,&open2);
        result=open1*open2;
        printf("the result is %f",result);
        break;

        case '/':
        printf("enter two number");
        scanf("%f,%f",&open1,&open2);
        result=open1/open2;
        printf("the result is %f",result);
        break;


        default:
        printf("wrong operator");
        break;

    }
    }
