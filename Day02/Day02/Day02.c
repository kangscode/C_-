#include<stdio.h>

//int add(int n1, int n2)
//{
//	return n1 + n2;
//}

void add2(int n1, int n2)
{
	printf("연산 결과: %d\n", n1 + n2);
}

void add(int n1, int n2)
{
	printf("더한 값: %d\n", n1 + n2);
}

void sub(int n1, int n2) 
{
	printf("뺀 값: %d\n", n1 - n2);
}

int mul(int n1, int n2)
{
	return n1 * n2;
}

int div(int n1, int n2)
{
	return n1 / n2;
}

void calc(int n1, char op, int n2)
{
	switch(op)
	{
	case '+':
		add(n1, n2);
		break;
	case '-':
		sub(n1, n2);
		break;
	case '*':
		printf("곱한 값: %d\n", mul(n1, n2));
		break;
	case '/':
		printf("나눈 값: %d\n", div(n1, n2));
		break;
	}

}

int Total(int kor, int mat, int eng)
{
	return kor + mat + eng;
}

double Avg(int total)
{
	return total / 3.0;
}

char Grade(double avg)
{
	switch ((int)avg / 10)
	{
	case 10:
	case 9:
		return 'A';
	case 8:
		return 'B';
	case 7:
		return 'B';
	case 6:
		return 'B';
	default:
		return 'F';
	}
}

int main()
{
	// 함수의 정의
	// 반환형: 함수 내용의 작업을 마치고 값을 반환해줄 때 사용할 자료형
	// 함수 이름: 함수를 사용하기 위해 호출할 때 사용할 이름
	// 매개 변수: 함수를 호출할 때 값을 전해줄 수 있는데, 이 때 값을 저장하는 변수
	// 함수 기능: 함수의 기능을 맡아줄 코드들이 작성되는 영역

	// 함수의 호출
	// 반환값을 저장할 변수: 함수가 반환해주는 값을 저장할 변수
	// 호출할 함수 이름: 정의된 함수 중 사용할 함수의 이름
	// 인수: 함수가 동작할 때 필요한 값

	
	//int result;

	//result = add(14, 13);

	//printf("연산 결과: %d\n", result);

	//add2(8, 36);


	int n1, n2;
	printf("두 수 입력: ");
	scanf("%d%d", &n1, &n2);

	add(n1, n2);
	sub(n1, n2);
	printf("곱한 값: %d\n", mul(n1, n2));
	printf("나눈 값: %d\n", div(n1, n2));
	

	char op;
	printf("연산 입력: ");
	scanf("%d %c%d", &n1, &op, &n2);

	calc(n1, op, n2);

	
	int kor, mat, eng, total;
	double avg;
	char grade;
	printf("국어, 수학, 영어 성적 입력; ");
	scanf("%d%d%d", &kor, &mat, &eng);

	total = Total(kor, mat, eng);
	avg = Avg(total);
	grade = Grade(avg);

	printf("총합: %d\n", total);
	printf("평균: %.2lf\n", avg); 
	printf("등급: %c\n", grade);


	return 0;
}