#include"main.h"

/**
* _islower - take int parametr checks for lower or upper
* returns: 1 for lower case and return 0 for upper case Alphabet
* c: parameter takes in character
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
