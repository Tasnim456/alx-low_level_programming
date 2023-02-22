#include "main.h"
/**
*  _islower -  a function that checks for lowercase character.
*@c : the character
*Return: 0 if the letter is not lowercase
*Return : 1 if is lowercase
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
