#include<stdio.h>

//--- 포인터 ---
//	포인터 변수는 주소를 저장해주는 변수
//	포인터 변수 선언 방법: 저장할 공간의 자료형 *(애스타리스크)변수명;
//	포인터 변수 안에 저장된 주소로 접근해서 주소 안의 값을 확인할 때는
//	*포인터 변수  형식으로 확인할 수 있다. 이를 역참조라고 부른다.
//  포인터 변수는 일반 변수의 주소를 저장할 수 있고, 
//	이중 포인터 변수는 포인터 변수의 주소를 저장할 수 있고, 
//	삼중 포인터 변수는 이중 포인터 변수의 주소를 저장할 수 있고,
//	사중 포인터 변수는 삼중 포인터 변수의 주소를 저장할 수 있고,
//

int main()
{
	int num = 5;	// int - 정수
	int* ptr;	// int* - int자료형을 가진 공간의 주소
	int** dptr;
	int*** tptr;

	ptr = &num;
	dptr = &ptr;
	tptr = &dptr;

	printf("num의 주소 : %p\n", &num);
	printf("ptr의 값 : %p\n", ptr);

	printf("num의 값 : %d\n", num);
	printf("ptr을 이용한 num의 값 : %d\n", *ptr);
	printf("dptr을 이용한 num의 값 : %d\n", **dptr);
	printf("tptr을 이용한 num의 값 : %d\n", ***tptr);

	printf("ptr의 주소 : %p\n", &ptr);
	printf("dptr의 값 : %p\n", dptr);

	printf("dptr의 주소 : %p\n", &dptr);
	printf("tptr의 값 : %p\n", tptr);


	int n;
	int* p;
	p = &n;
	scanf("입력: %d", p);
	printf("출력: %d\n", n);


	return 0;
}