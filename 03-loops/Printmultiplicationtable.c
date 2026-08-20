#include<stdio.h>
void main()
{
int a;
int n;
printf("ENTER THE NUMBER YOU WANT TABLE OF");
scanf("%d",&n);
for(a=1;a<=10;a++)
{printf("%d X %d = %d\n", n , a, a*n );
}
}