
<<<<<<< HEAD
/**
 * find_listint_loop - finds the loop
 * Description:in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *second = head;
	listint_t *first = head;

	if (head == NULL)
		return (NULL);
	while (second && first && first->next)
	{
		first = first->next->next;
		second = second->next;
		if (first == second)
		{
			second = head;
			while (second != first)
			{
				second = second->next;
				first = first->next;
			}
			return (first);
		}
	}
	return (NULL);

}
=======
>>>>>>> d97225d8f8b66fef88ff72a0e9b73629fa6d042a
