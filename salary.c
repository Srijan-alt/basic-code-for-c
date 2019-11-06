#include<stdio.h>
void main()
{
 float basic,AGP,splal,tax,salary;
 char grade;
 printf("enter the grade");
 scanf("%c",&grade);

 switch(grade)
 {
  case 'A':
  basic=50000;
  AGP= 10000;
  splal=10000;
  tax=0.15*60000;
  break;

  case 'B':
  basic=35000;
  AGP= 7500;
  splal=7500;
  tax=0.12*42500;
  break;

  case 'C':
  basic=30000;
  AGP= 5000;
  splal=5000;
  tax=0;
  break;

  default:
  printf("wrong");
  break;
}
   salary=(basic+AGP+splal);
   printf("the salary is %f",salary-tax);
}
