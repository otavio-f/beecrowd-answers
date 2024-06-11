/*
 * 1110 - Throwing Cards Away
 * Author: Otavio
 * Date: 11/06/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct qnode
{
	const unsigned char data;
	struct qnode *next;
};

struct qnode*
tail(struct qnode*);

struct qnode*
append(struct qnode*, const unsigned char data);

struct qnode*
dequeue(struct qnode*);

int
main()
{
	int n;
	struct qnode *first;
	struct qnode *last;
	while(scanf("%d\n", &n) && n)
	{
		first = append(NULL, 1);
		/* fill queue */
		for(int i=1; i<n; i++)
			last = append(first, i+1);

		printf("Discarded cards:");
		while(first->next != NULL)
		{
			/*throw away top*/
			printf(" %d%s", first->data, first->next->next?",":"");
			first = dequeue(first);
			/*put new top at bottom*/
			last->next = first;
			first = first->next;
			last = last->next;
			last->next = NULL;
		}
		printf("\nRemaining card: %d\n", first->data);
	}
}

struct qnode*
tail(struct qnode *node)
{
	while(node->next)
		node = node->next;
	return node;
}

struct qnode*
append(struct qnode *head, const unsigned char data)
{
	struct qnode newtail = {.data=data, .next=NULL};
	struct qnode *newtailptr = malloc(sizeof(newtail));
	memcpy(newtailptr, &newtail, sizeof(newtail));
	if(head != NULL)
		tail(head)->next = newtailptr;
	return newtailptr;
}

struct qnode*
dequeue(struct qnode* head)
{
	struct qnode *next = head->next;
	free(head);
	return next;
}
