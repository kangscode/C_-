#include <stdio.h>
#include <stdlib.h>
#define EMPTY 0

typedef struct node {
	int data;
	struct node* Llink;
	struct node* Rlink;
}DLinkedList;

DLinkedList* GetNode()
{
	DLinkedList* tmp;

	tmp = (DLinkedList*)malloc(sizeof(DLinkedList));
	tmp->Llink = EMPTY;
	tmp->Rlink = EMPTY;
	return tmp;
}

void Insert(DLinkedList** head, int data)
{
	if (*head == EMPTY) {

		*head = GetNode();
		(*head)->data = data;
		
	}
	else {
		Insert(&(*head)->Rlink, data);
		(*head)->Rlink->Llink = *head;
	}
}

void Output(DLinkedList** head)
{
	if (*head == EMPTY) {
		return;
	}
	else {
		printf("%d\n", (*head)->data);
		Output(&(*head)->Rlink);
	}
}

void Add(DLinkedList** head, int data1, int data2)
{
	DLinkedList* newNode = EMPTY;

	if (*head == EMPTY) {
		printf("%d not exist\n", data1);
		return;
	}
	else if ((*head)->data == data1) {
		
		Insert(&newNode, data2);
		newNode->Llink = *head;
		newNode->Rlink = (*head)->Rlink;
		(*head)->Rlink->Llink = newNode;
		(*head)->Rlink = newNode;

		return;
	}
	else {
		Add(&(*head)->Rlink, data1, data2);
	}
}

void Delete(DLinkedList** head, int data)
{
	DLinkedList* tmp;

	if (*head == EMPTY) {
		printf("%d not exist\n", data);
	}
	else if ((*head)->data == data) {
		tmp = *head;
		*head = (*head)->Rlink;

		if (*head != EMPTY) 
			(*head)->Llink = (*head)->Llink->Llink;
		
		free(tmp);
	}
	else {
		Delete(&(*head)->Rlink, data);
	}

}

int main()
{
	DLinkedList* head = EMPTY;

	Insert(&head, 10);
	Insert(&head, 20);
	Insert(&head, 30);

	Output(&head);

	Add(&head, 20, 25);
	Add(&head, 40, 45);

	Delete(&head, 30);
	Delete(&head, 40);

	Output(&head);


	return 0;
}
