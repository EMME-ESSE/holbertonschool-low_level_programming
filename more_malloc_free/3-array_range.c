#include "main.h"
/**
 *  * array_range - function;
 *   * @min: the minimum;
 *    * @max: the maximum;
 *     * Return: 0;
 *      **/
int *array_range(int min, int max)
{
		int *pun;

			if (min > max)
					{
								return (NULL);
									}
				pun = malloc(sizeof(int) * (max - min));
					if (pun == NULL)
							{
										return (NULL);
											}
						return (pun);
}
