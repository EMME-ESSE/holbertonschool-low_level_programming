#include "lists.h"
/**
 *
**/
list_t *add_node_end(list_t **head, const char *str)
{
	char *doble;
	int i;
	list_t *ult = *head;

        ult = malloc(sizeof(list_t));
        if (ult == NULL)
        {
                return (NULL);
        }
        doble = strdup(str);
        if (doble == NULL)
        {
                free(ult);
                return (NULL);
        }
        for (i = 0; str[i] != '\0';)
                i++;

	while (ult->next != NULL)
	{
		ult = ult->next;
	}
   	ult->next = (list_t *) malloc(sizeof(list_t));
   	ult->next->str = doble;
   	ult->next->next = NULL;

        ult->str = doble;
        ult->len = i;
        return (ult);	
}
