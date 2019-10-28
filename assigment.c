#include<stdio.h>
void main()
{
    int p,c,m,avg,total;
    printf("table of grades \n S - 100 to 90 \n A - 89 to 80 \n B - 79 to 70 \n C - 69 to 60 \n D - 59 to 50 \n E - 49 to 40 \n F - 39 and below \n");
    printf("enter the marks of phy\n");
    scanf("%d",&p);
    printf("enter the marks of chem\n");
    scanf("%d",&c);
    printf("enter the marks of maths\n");
    scanf("%d",&m);
    total=p+c+m;
    total=total/3;
    avg=total/10;
    switch(avg)
    {
    case 9:
    printf("S");
    break;

    case 8:
    printf("A");
    break;

    case 7:
    printf("B");
    break;

    case 6:
    printf("C");
    break;

    case 5:
    printf("D");
    break;

    case 4:
    printf("E");
    break;

    case 3:
    printf("F");
    break;

    default:
    printf("wrong marks entered");
    break;
    }
}
