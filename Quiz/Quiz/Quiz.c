//Quiz 1
 
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct
//{
//	int data1;
//	int data2;
//}Data1;
//
//void Func1(Data1** p)
//{
//	(*p)->data1 = 100;
//}
//
//void Func2(Data1* p)
//{
//	p->data2 = 200;
//}
//
//int main()
//{
//	Data1* p = (Data1*)malloc(sizeof(Data1));
//
//	Func1(&p);
//	Func2(p);
//	
//	printf("data1: %d, data2: %d\n", p->data1, p->data2);
//
//	free(p);
//
//	return 0;
//}


//Quiz 2
 
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct
//{
//	char name[20];
//	int score;
//}Element;
//
//typedef struct
//{
//	int data1;
//	int data2;
//	Element p;
//}Data1;
//
//int main()
//{
//	Data1* p = (Data1*)malloc(sizeof(Data1));
//
//	printf("이름을 입력하세요 : ");
//	scanf("%s", p->p.name);
//
//	printf("점수를 입력하세요 : ");
//	scanf("%d", &p->p.score);
//
//	printf("이름: %s\n", p->p.name);
//	printf("점수: %d\n", p->p.score);
//
//	free(p);
//
//	return 0;
//}


// Quiz 3

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct
//{
//	char name[20];
//	int score;
//}Element;
//
//typedef struct
//{
//	int data1;
//	int data2;
//	Element* p;
//}Data1;
//
//
//int main()
//{
//	Data1* p = (Data1*)malloc(sizeof(Data1));
//	p->p = (Element*)malloc(sizeof(Element));
//
//	printf("이름을 입력하세요 : ");
//	scanf("%s", p->p->name);
//
//	printf("점수를 입력하세요 : ");
//	scanf("%d", &p->p->score);
//
//	printf("이름: %s\n", p->p->name);
//	printf("점수: %d\n", p->p->score);
//
//	free(p->p);
//	free(p);
//
//	return 0;
//}


// Quiz 4

//#include<stdio.h>
//#include <stdlib.h>
//
//typedef struct
//{
//	char* name;
//	int score;
//}Element;
//
//typedef struct
//{
//	int data1;
//	int data2;
//	Element* p;
//}Data1;
//
//int main()
//{
//	Data1* p = (Data1*)malloc(sizeof(Data1));
//	p->p = (Element*)malloc(sizeof(Element));
//	p->p->name = (char*)malloc(sizeof(char) * 20);
//
//	printf("이름을 입력하세요 : ");
//	scanf("%s", p->p->name);
//
//	printf("점수를 입력하세요 : ");
//	scanf("%d", &p->p->score);
//
//	printf("이름: %s\n", p->p->name);
//	printf("점수: %d\n", p->p->score);
//	
//	free(p->p->name);
//	free(p->p);
//	free(p);
//
//	return 0;
//}


//Quiz 5

#include<stdio.h>
#include <stdlib.h>

typedef struct
{
	int data3;
	int data4;
}Data2;
typedef struct
{
	int data1;
	int data2;
	Data2* p;
}Data1;

void Func2(Data2* p)
{
	p->data3 = 100;
}

void Func3(Data1*** p)
{
	(**p)->p->data4 = 200;
}


void Func1(Data1** p)
{
	Data2* p2 = (Data2*)malloc(sizeof(Data2));
	(*p)->p = p2;

	Func2((*p)->p);
	Func3(&p);
	

}

int main()
{
	Data1* p = (Data1*)malloc(sizeof(Data1));

	Func1(&p);

	printf("data3: %d\n", p->p->data3);
	printf("data4: %d\n", p->p->data4);

	free(p->p);
	free(p);



	return 0;
}