#include <stdio.h>
/**
* main - this main function
* Return: always 0
*/
int main(void)
{
int a;
int b;
for (a = 0 ; a < 10 ; a++)
{
for (b = 0 ; b < 10 ; b++)
{
if (a != b &&  a < b)
{
putchar('0' + a);
putchar('0' + b);
if (a + b != 17)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
