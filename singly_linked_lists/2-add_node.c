#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the list
 * @head: pointer to pointer to head
 * @str: a string
 *
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{

