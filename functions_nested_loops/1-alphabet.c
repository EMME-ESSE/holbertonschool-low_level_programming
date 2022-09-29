#include <unistd.h>
/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
**/
void print_alphabet(void);
{
	char low;
	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
