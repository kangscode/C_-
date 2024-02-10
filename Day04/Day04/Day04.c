#include<stdio.h>

//---- 재귀 함수 ----
// 재귀: 원래의 자리로 되돌아가거나 되돌아옴. 반복, 되풀이
// 재귀 함수: 함수 내에서 자기 자신을 다시 호출하는 함수

//void Recursive(int n)
//{
//	if (n == 0)
//		return;
//	printf("Recursive Fuction!\n");
//	Recursive(n - 1);
//	printf("%d\n", n);
//}

//int Func(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n + Func(n - 1);
//}

int Fac(int n)
{
	if (n == 1)
		return 1;
	else
		return n * Fac(n - 1); 
}

int Fib(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return Fib(n - 2) + Fib(n - 1);

}

void Hanoi(int n, char A, char B, char C)
{
	if (n == 1)
		printf("%d -> %c\n", n, C);
	else {
		Hanoi(n-1, A, C, B);
		printf("%d -> %c\n", n, C);
		Hanoi(n-1, B, A, C);
	}

}

int main()	// Func(1) -> 1, Func(2) -> 3
{

	//Recursive(3);	


	/*int num;

	printf("입력: ");
	scanf("%d", &num);

	printf("출력: %d\n", Func(num));*/


	int num;
	printf("입력: ");
	scanf("%d", &num);

	printf("출력: %d\n", Fac(num));


	printf("입력: ");
	scanf("%d", &num);

	printf("출력: %d\n", Fib(num));


	printf("입력: ");
	scanf("%d", &num);

	printf("출력\n");
	Hanoi(num, 'A', 'B', 'C');




	return 0;
}
