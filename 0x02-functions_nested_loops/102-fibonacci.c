#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int counter;
int countto = 50;
long a = 1;
long b = 2;

for (counter = 1; counter <= (countto / 2); counter++)
{
printf("%li %li ", a, b);
a += b;
b += a;
}
if (countto % 2 == 1)
printf("%li", a);

printf("\n");
return (0);
}
