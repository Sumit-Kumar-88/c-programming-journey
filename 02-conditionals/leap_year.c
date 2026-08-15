#include<stdio.h>
void main()
{int a;
printf("ENTER THE YEAR");
scanf("%d",&a);
if(a%4==0 && a%4 != 0)
printf("IT IS A LEAP YEAR");
else
printf("IT IS NOT A LEAP YEAR");
}
