#include <stdio.h>

int main()
{
    int a, sum = 0;

    printf("ENTER THE NUMBER: ");
    scanf("%d", &a);

    while (a != 0)
    {
        sum = sum + (a % 10); 
        a = a / 10;           
    }

    printf("sum OF DIGITS IS = %d\n", sum);

}