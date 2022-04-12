#include"main.h"

/**
* _islower - take int parametr checks for lower or upper
* @c: takes character 
* Returns: 1 for lower case, 0 for upper case Alphabet
*
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
