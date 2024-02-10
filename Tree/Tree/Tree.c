#include<stdio.h>
#include<stdlib.h>
#define EMPTY 0

typedef struct node {
	struct node* Llink;
	int data;
	struct node* Rlink;
}Tree;

Tree* GetNode()
{
	Tree* tmp;
	
	tmp = (Tree*)malloc(sizeof(Tree));
	tmp->Llink = EMPTY;
	tmp->Rlink = EMPTY;

	return tmp;
}

void Insert(Tree** root, int data)
{
	if(*root == EMPTY) {
		*root = GetNode();
		(*root)->data = data;
	}
	else if((*root)->data > data) {
		Insert(&(*root)->Llink, data);
	}
	else if((*root)->data < data) {
		Insert(&(*root)->Rlink, data);
	}

}

void Search(Tree** root, int data)
{
	if (*root == EMPTY) {
		printf("%d not exist\n", data);
	}
	else if ((*root)->data == data) {
		printf("%d Search\n", data);
	}
	else if ((*root)->data > data) {
		Search(&(*root)->Llink, data);
	}
	else if ((*root)->data < data) {
		Search(&(*root)->Rlink, data);
	}
}

int main()
{
	Tree* root = EMPTY;
	int tree[] = { 45, 27, 17, 62, 57, 73, 52, 65, 35, 24, 76 };

	for (int i = 0; i < 11; i++) {
		Insert(&root, tree[i]);
	}

	Search(&root, 35);
	Search(&root, 57);
	Search(&root, 36);

	return 0;
}