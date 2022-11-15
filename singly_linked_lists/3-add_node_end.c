#include "lists.h"
/**
 *
**/
list_t *add_node_end(list_t **head, const char *str)
{
	char *doble;
	int i;
	list_t *nuevo;
	list_t *ult = NULL;

	nuevo = malloc(sizeof(list_t));
	if (nuevo == NULL)
	{
		return (NULL);
	}
	doble = strdup(str);
	if (doble == NULL)
	{
		free(nuevo);
		return (NULL);
	}
	for (i = 0; str[i] != '\0';)
		i++;
	nuevo->str = doble;
	nuevo->len = i;
	nuevo->next = NULL;
	if (*head == NULL)
		*head = ult;
	else
	{
		nuevo = *head;
		while (nuevo->next != NULL)
			nuevo = nuevo->next;
		nuevo->next = ult;
	}
	return (ult);
}
