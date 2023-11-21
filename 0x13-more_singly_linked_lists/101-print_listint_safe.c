#include "lists.h"
/**
 * looped_listint_len - functin
 * @head: parameter
 * Return: 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *se, *re;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	se = head->next;
	re = (head->next)->next;

	while (re)
	{
		if (se == re)
		{
			se = head;
			while (se != re)
			{
				nodes++;
				se = se->next;
				re = re->next;
			}
			se = se->next;
			while (se != re)
			{
				nodes++;
				se = se->next;
			}
			return (nodes);
		}
		se = se->next;
		re = (re->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - function
 * @head: parameter
 * Return: 0
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
