#include<stdio.h>
void main()
{
    float m,p,c,T1,T2;
    printf("maths");
    scanf("%f",&m);
    printf("ph");
    scanf("%f",&p);
    printf("ch");
    scanf("%f",&c);
    T1=m+p+c;
    T2=m+p;
    if(T1>=200)
     {
      if(m>=60)
      {
       if(p>=50)
       {
        if(c>=40)
        {
         printf("good");
         }
        }
       }
      }

    else if (T2>=150)
    {
      printf("passed");
    }

    else
    {
      printf("sorry");
    }
}
