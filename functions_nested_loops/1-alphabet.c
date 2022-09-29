#include <unistd.h>
/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
**/
void print_alphabet(void);
{
char print_alphabet;
for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
putchar(print_alphabet);
putchar('\n');
return (0);
}
