#include <stdio.h>
#include <stdlib.h>

// ---- 동적 할당 ----
// 메모리 공간을 원하는 시점에 크기를 지정해서 할당 받고 그 공간을 사용 후, 원하는 시점에 해제하는 방식
// 메모리 공간을 할당 받을 때는 malloc()함수를 사용해서 할당 받을 수 있다.
// 이때, 반드시 stdlib.h 헤더파일을 선언해줘야 한다.
// malloc()함수의 원형: 주소를 저장할 변수 = (저장할 변수의 자료형)malloc(크기)
// 동적 할당을 통해서 할당 받은 메모리 공간은 Heap영역에 해당한다.
// 동적 할당 받은 메모리 공간을 해제할 때는 free(해제할 공간의 주소); 형식으로 해제할 수 있다.
// 한 번의 동적 할당에는  반드시 한 번의 동적 해제가 진행돼야 한다.
// malloc()함수에서 크기를 넘겨줄 때는 기본적으로 sizeof()연산자를 이용해서 넘겨준다.
// 
//



int main()
{
	/*int* ptr;
	
	ptr = (int*)malloc(4);

	*ptr = 10;

	printf("출력: %d\n", *ptr);

	free(ptr);*/ 


	int* ptr;

	ptr = (int*)malloc(sizeof(int) * 34);

	ptr[0] = 10;
	ptr[1] = 20;

	printf("출력: %d %d\n", ptr[0], ptr[1]);

	free(ptr);


	int len;
	char* word;

	printf("영단어 길이 입력: ");
	scanf("%d", &len);

	word = (char*)malloc(sizeof(char) * (len + 1));

	printf("영단어 입력: ");
	scanf("%s", word);

	printf("영단어 출력: ");
	for (int i = len - 1; i >= 0; i--)
		printf("%c", word[i]);

	free(word);

	


	return 0;
}