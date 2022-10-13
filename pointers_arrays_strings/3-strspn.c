#include "main.h"
/**
** _strspn - Gets the length of a prefix substring.
** @s: The String to be calculated
** @accept: the prefix
** Return: The length.
**/
unsigned int _strspn(char *s, char *accept)
{
unsigned int num;
int index;
while(*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
num++;
break;
}
else if(accept[index] != '\0')
return(num);
}
s++;
}
return(num);
}
