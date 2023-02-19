#include <stdio.h>
/**
* main - this main function
* Return: always 0
*/
int main(void)
{
int a;
int b;
int c;
for (a = 0 ; a < 10 ; a++)
{
for (b = 0 ; b < 10 ; b++)
{
for (c = 0 ; c < 10 ; c++)
{
if (c != b && b != a && a < b && b < c)
{
putchar('0' + a);
putchar('0' + b);
putchar('0' + c);
if (c + b + a != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
