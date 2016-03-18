/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
}*cur1,*cur2;

struct node * sortLinkedList(struct node *head) {
	int temp;
	if (head != NULL)
	{
		cur1 = head;
		while (cur1 != NULL)
		{
			cur2 = cur1->next;
			while (cur2 != NULL)
			{
				if (cur1->num > cur2->num)
				{
					temp = cur1->num;
					cur1->num = cur2->num;
					cur2->num = temp;
				}
				cur2 = cur2->next;
			}
			cur1 = cur1->next;
		}
	}
	else
		return NULL;
}