#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds new node to end of the list
 * @head: pointer to the head of the list
 * @str: a string
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);}





