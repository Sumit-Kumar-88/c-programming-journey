#include<stdio.h>;
void main ()
{int a,b,c;
printf("This program finds the largest of 3 non-equal numbers.\n");
printf("enter first number =");
scanf("%d",&a);
printf("enter second number =");
scanf("%d",&b);
printf("enter third number =");
scanf("%d",&c);
if(a>b && a>c)
printf("Num1 is largest");
else if(b>a && b>c)
printf("Num2 is largest");
else if(c>a && c>b)
printf("Num 3 is largest");

}