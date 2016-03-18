/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *cur1, *cur2;
	int count = 1;
	if (head==NULL)
		return NULL;
	else if (K > 0)
	{
		if (K == 1)
			head = NULL;
		else
		{
			cur2 = head;
			cur1 = cur2->next;
			while (cur1 != NULL)
			{
				count++;
				if (count == K)
				{
					cur2->next = cur1->next;
					K = K + K;
				}
				cur1 = cur1->next;
				cur2 = cur2->next;
			}
		}
	}
	else
		return NULL;
}