#include<stdio.h>
struct sec_B
{
    char a[20];
    int reg;
};
 void main()
{
    struct sec_B s[2];
    int i;
    char c;
    for(i=0;i<2;i++)
    {
    printf("enter the name of student\n");
    if(i>0)
    {
        scanf("%c",&c);//this line is to accept the enter key in second time
    }
    gets(s[i].a);
    printf("enter the regno.\n");
    scanf("%d",&s[i].reg);
    }
    for(i=0;i<2;i++)
    {
        printf("result %d is: \n",i+1);
        puts(s[i].a);
        printf("%d\n",s[i].reg);
    }

}
