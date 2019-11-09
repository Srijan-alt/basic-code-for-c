#include<stdio.h>
#include<string.h>
void  main()
{
    char a[10],b[10],c[10],d[10];
    int i,j,o,k=0,flag=0;
    printf("enter the string\n");
    gets(a);
    gets(b);
    for(i=0;a[i];i++)
    {
    }
    printf("length 1=%d\n",i);
    for(j=0;b[j];j++)
    {
    }
    printf("length 2=%d\n",j);
    for(o=i-1;o>=0;o--)//reverse
    {
    c[k]=a[o];
    k++;
    }
    puts(c);
    i=0;//concatinate
    for(i=0;a[i];i++)
    {
        d[i]=a[i];
    }
    j=0;
    for(j=0;b[j];j++)
    {
        d[i++]=b[j];
    }
    puts(d);

    i=0;//compare
    for(i=0;a[i];i++)
    {
        if(a[i]==b[i])
        {
          flag++;
        }
        else
        flag =0;
        break;
    }
    if(flag==0)
        printf("not same\n");
    else
        printf("same\n");

    i=0;
    flag=0;
    for(i=0;a[i];i++)
     {

        if(c[i]==a[i])
        flag++;
        else
        flag=0;
        break;
     }
     if(flag==0)
        printf("not palindrone\n");
    else
        printf("palindrone\n");

}






