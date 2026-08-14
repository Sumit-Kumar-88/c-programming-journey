#include <stdio.h>
void main()
{ int a,b,c;
char op;
printf("Enter First Number =");
scanf("%d",&a);
printf("Enter The Second Number =");
scanf("%d",&b);
printf("Enter Operator =");
scanf(" %c",&op);
if (op=='+')
{c=a+b;
}
else if(op=='-')
{c=a-b;
}
else if(op=='*')
{c=a*b;
}
else if (op=='/')
{c=a/b;
}
else {
        printf("\n Invalid operator!");
}
printf("Result is = %d\n", c);
}