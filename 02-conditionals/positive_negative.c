#include<stdio.h>
void main()
{ int a;
printf("enter number =");
scanf("%d",&a);
if (a < 0)
printf("number is negative");
else if(a > 0)
printf("number is positive");
else
printf("number is not an integer or number = 0");
return 0;
}