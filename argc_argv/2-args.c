#include "main.h"
/**
 *  *  * main - Prints the arguments recived.
 *   *   * @argc: An argument counter
 *    *    * @argv: An argument values
 *     *     * Return: Always 0 (Success)
 *     **/
int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", *argv ++);
return (0);
}
