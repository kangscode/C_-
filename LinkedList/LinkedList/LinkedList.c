#include <stdio.h>
#include <stdlib.h>
#define EMPTY 0

typedef struct node {
int data;
struct node* link;
}LinkedList;

LinkedList* GetNode()
{
	LinkedList* tmp;

	tmp = (LinkedList*)malloc(sizeof(LinkedList));
	tmp->link = EMPTY;
	return tmp;
}

void Insert(LinkedList** head, int data)
{
	if (*head == EMPTY)
	{
		*head = GetNode();
		(*head)->data = data;
	}
	else {
		Insert(&(*head)->link, data);
	}

}

void Output(LinkedList** head)
{
	if (*head != EMPTY)
	{
		printf("%d\n", (*head)->data);
		Output(&(*head)->link);
	}
}

void Search(LinkedList** head, int data)
{
	if (*head == EMPTY) {
		printf("%d not exist\n", data);
		return;
	}
	else if ((*head)->data == data) {
		printf("%d Search\n", data);
		return;
	}
	else {
		Search(&(*head)->link, data);
	}
}

void Add(LinkedList** head, int data1, int data2)
{
	LinkedList* newNode = EMPTY;

	if (*head == EMPTY) {
		printf("%d not exist\n", data1);
	}
	else if ((*head)->data == data1) {

		Insert(&newNode, data2);
		newNode->link = (*head)->link;
		(*head)->link = newNode;

		return;
	}
	else {
		Add(&(*head)->link, data1, data2);
	}
}

void Delete(LinkedList** head, int data)
{
	LinkedList* tmp;

	if (*head == EMPTY) {
		printf("%d not exist\n", data);
	}
	else if ((*head)->data == data) {

		tmp = *head;
		*head = (*head)->link;
		free(tmp);
	}
	else {
		Delete(&(*head)->link, data);
	}
}

void Sort(LinkedList** head)
{
	LinkedList* tmp;
	int tmp_int;

	if (*head != EMPTY)
	{

		tmp = (*head)->link;

		while (tmp != EMPTY)
		{
			if ((*head)->data < tmp->data)
			{

				tmp_int = (*head)->data;
				(*head)->data = tmp->data;
				(tmp)->data = tmp_int;

			}
			tmp = tmp->link;
		}
		Sort(&(*head)->link);
	}

}

int main()
{
	LinkedList* head = EMPTY;

	Insert(&head, 10);
	Insert(&head, 20);
	Insert(&head, 30);

	/*Output(&head);

	Search(&head, 30);
	Search(&head, 50);

	Add(&head, 20, 25);
	Add(&head, 30, 35);
	Add(&head, 50, 55);

	Delete(&head, 30);
	Delete(&head, 45);*/

	Sort(&head);
	Output(&head);


	return 0;
}