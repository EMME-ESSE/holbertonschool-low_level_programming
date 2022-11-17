/**
 * free_list - Frees a list.
 * @head: A pointer to the list.
 */
void free_list(list_t *head)
{
	list_t *fr;

	while (head)
	{
		fr = head->next;
		free(head->str);
		free(head);
		head = fr;
	}
}
