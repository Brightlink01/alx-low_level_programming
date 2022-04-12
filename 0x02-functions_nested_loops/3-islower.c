#include"main.h"

/**
*_islower - returns 1 if lower case and 0 otherwise
*@c: takes character
*Returns: 1 for lower case, 0 for upper case Alphabet
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
