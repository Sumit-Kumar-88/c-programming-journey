#include<stdio.h>
void main()
{float a,b,c,d,e,perc,sum;
printf("ENTER MARKS IN FIRST SUBJECT =");
scanf("%f",&a);
printf("ENTER MARKS IN SECOND SUBJECT =");
scanf("%f",&b);
printf("ENTER MARKS IN THIRD SUBJECT =");
scanf("%f",&c);
printf("ENTER MARKS IN FOURTH SUBJECT =");
scanf("%f",&d);
printf("ENTER MARKS IN FIFTH SUBJECT =");
scanf("%f",&e);
sum=a+b+c+d+e;
perc= (sum*100) / 500;
printf("SUM=%f\n",sum);
printf("PERCENTAGE=%f\n",perc);
if (perc >= 90)
    printf("A GRADE");
else if (perc >= 80)
    printf("B GRADE");
else if (perc >= 65)
    printf("C GRADE");
else
    printf("F GRADE");
}