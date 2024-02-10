#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define EMPTY 0

typedef struct node {
	char name[20];
	int age;
	struct node* link;
}Stack;

Stack* GetNode()
{
	Stack* tmp;
	tmp = (Stack*)malloc(sizeof(Stack));
	tmp->link = EMPTY;
	return tmp;
}

void Push(Stack** top, Stack data)
{
	Stack* tmp;
	tmp = *top;
	*top = GetNode();
	strcpy((*top)->name, data.name);
	(*top)->age = data.age;
	(*top)->link = tmp;
}

void Pop(Stack** top)
{
	if (*top == EMPTY)
	{
		printf("Stack is Empty\n");
		return;
	}

	Stack* tmp;

	tmp = *top;
	*top = (*top)->link;
	printf("����\n");
	free(tmp);
}

void Print(Stack** top)
{
	Stack* tmp;
	int cnt = 1;

	tmp = *top;

	printf("��ȣ\t�̸�\t����\n");

	while (tmp != EMPTY)
	{
		printf("%3d\t%s\t%3d\n", cnt++, tmp->name, tmp->age);
		tmp = tmp->link;
	}
}

int main()
{
	Stack* top = EMPTY;
	int sel;
	Stack data;

	do {
		printf("1. �Է�\n");
		printf("2. ����\n");
		printf("3. ���\n");
		printf("4. ����\n");
		printf("��ȣ �Է� >> ");
		scanf("%d", &sel);

		switch (sel) {
		case 1:
			printf("�̸� �Է�: ");
			scanf("%s", data.name);
			printf("���� �Է�: ");
			scanf("%d", &data.age);
			Push(&top, data);
			system("pause");
				break;
		case 2:
			Pop(&top);
			system("pause");
			break;
		case 3:
			Print(&top);
			system("pause");
			break;
		case 4:
			while (top != EMPTY)
			{
				Pop(&top);
			}
			break;
		default:
			printf("1 ~ 4 �� �ϳ��� �Է����ּ���.\n");
			system("pause");
		}
		system("cls");

	} while (sel != 4);

	return 0;
}