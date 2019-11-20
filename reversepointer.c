#include<stdio.h>
#include<string.h>
void main()
{
 int i=0,l=0,*a,*b;
 char ch[5],j;
 a=ch;
 printf("enter");
 gets(ch);
 l=strlen(ch);
 printf("%d",l);
 for(i=0;i<5;i++)
 {
    a=ch;
}
 for(i=0;i<5;i++,b++,a--)
 {
    j=*b;
    *b=*a;
    *a=j;
 }
  for(i=0;i<5;i++)
  {
  printf("%c",*b);
  }
}
