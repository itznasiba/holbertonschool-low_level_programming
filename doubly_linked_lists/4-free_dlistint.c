#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: a pointer to the head of the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
<<<<<<< HEAD
		dlistint_t *temp;

		while (head != NULL){
			temp = head;
			head = head->next;
			free(temp);
		}
}
=======
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
>>>>>>> da382c34c52473245a09d999c28ee430c7dc0ad8
