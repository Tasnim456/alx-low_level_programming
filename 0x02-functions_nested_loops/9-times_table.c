#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
*Return : ...
**/
void times_table(void)
{
int a, res, i;
for (a = 0 ; a <= 9 ; a++)
{
for (i = 0 ; i <= 9 ; i++)
{
res = a * i;
_putchar(res);
_putchar(',');
}
_putchar('\n');
}
}
