#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number.
*@c : number that we need its last digit
*Return: 0
**/
int print_last_digit(int c)
{
int t = c % 10;
if (t < 0)
{
t *= -1;
}
_putchar(t + '0');
return (0);
}
