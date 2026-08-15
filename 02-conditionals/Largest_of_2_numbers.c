#include<stdio.h>
void main()
{int a;
int b;

printf("ENTER THE FIRST NUMBER =");
scanf("%d",&a);
printf("ENTER THE SECOND NUMBER =");
scanf("%d",&b);
if(a>b)
printf("FIRST NUMBER IS LARGEST");
if(b>a)
printf("SECONF NUMBER IS LARGEST");
else
printf("BOTH ARE EQUAL");

}