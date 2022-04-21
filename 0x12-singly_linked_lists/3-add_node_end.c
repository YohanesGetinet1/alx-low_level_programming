#include "lists.h"


/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */


list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node;
	list_t *current_node;
	int i;
	char  *strcpy;


	current_node = *head;
	while (current_node && current_node->next != NULL)
		current_node = current_node->next;


	strcpy = strdup(str);
	for (i = 0; str[i] != '\0'; i++)

		;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->len = i;
	new_node->str = strcpy;
	new_node->next = NULL;
	if (new_node == NULL)

	{
		free(new_node);
		return (NULL);
	}

	if (current_node)
		current_node->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
