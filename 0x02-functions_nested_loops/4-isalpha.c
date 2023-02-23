#include "main.h"
/**
*  _isalpha -   a function that checks for alphabetic character
*@c : the character
*Return: 0 if c is not letter
*Return : 1 if is lowercase or uppercase
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
