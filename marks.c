#include<stdio.h>
void main()
{
    float marks;
    printf("enter marks");
    scanf("%f",&marks);
    if (marks>80)
    {
        printf("distinction");
    }
 else if(marks>70)
      {
          printf("division 1");
      }
  else if  (marks>60)
         {
            printf("division 2");
         }
         else if (marks>50)
          {
              printf("division 3");
          }
         else if (marks<40)
          {
              printf("failed");
          }


}


