#include <stdio.h>

//---- 구조체 포인터 ----
// 구조체 포인터를 이용해서 역참조를 진행할 때는 기본적으로 ->(애로우)를 사용해서 진행한다.
// 별도로 *를 사용할 수 있는데 이때는 우선 순위 때문에 괄호를 묶어준다.
//				ex) (*d).data1 == d->data

//---- 포인터와 배열의 관계 ----
// 포인터와 배열은 밀접한 관계를 갖고 있으나, 분명한 차이점이 있다.
// 배열은 선언하게 되면 기본적으로 배열 자기 자신의 시작 주소를 갖고 있다.
// 포인터와 배열은 둘 다 주소를 가지고 연산을 진행하기 때문에 포인터를 배열처럼 사용할 수 있다.



typedef struct {
	int data1;
	int data2;
	int data3;
}Data;

void Func(Data* d)
{
	(*d).data1 = 11;
	d->data2 = 22;
}


typedef struct {
	int kor, mat, eng, total;
	double avg;
	char grade;
} Student;

void Total(Student* st)
{
	st->total = st->kor + st->mat + st->eng;
}

void Avg(Student* st)
{
	st->avg = st->total / 3.0;
}

void Grade(Student* st)
{
	switch ((int) (st->avg) / 10)
	{
	case 10:
	case 9:
		st->grade = 'A';
		break;
	case 8:
		st->grade = 'B';
		break;
	case 7:
		st->grade = 'C';
		break;
	case 6:
		st->grade = 'D';
		break;
	default:
		st->grade = 'F';
		break;
	}
}


int main()
{
	Data d;

	d.data1 = 10;
	d.data2 = 20;

	Func(&d);

	printf("출력: %d %d\n", d.data1, d.data2);


	Student st;

	printf("국어, 수학, 영어 성적 입력: ");
	scanf("%d%d%d", &st.kor, &st.mat, &st.eng);

	Total(&st);
	Avg(&st);
	Grade(&st);

	printf("총합: %d\n", st.total);
	printf("평균: %.2lf\n", st.avg);
	printf("등급: %c\n", st.grade);


	Data* pd;

	pd = &d;

	printf("d의 크기: %d\n", sizeof(d));
	printf("pd의 크기: %d\n", sizeof(pd));

	printf("pd의 값: %p\n", pd);


	char str[10];

	printf("str의 주소: %p\n", &str);
	printf("str의 값: %p\n", str);

	printf("입력: ");
	scanf("%s", str);

	printf("출력: %s\n", str);


	char str1[10] = "Hello";
	char* str2 = "Abcde";

	printf("str1: %s\n", str1); 
	printf("str2: %s\n", str2);

	str1[0] = 'B';
	//str2[0] = 'Z'; 문자열 상수 변경x

	printf("str1: %c%c%c%c%c\n", str1[0], str1[1], str1[2], str1[3], str1[4]);
	printf("str2: %c%c%c%c%c\n", str2[0], *(str2+1), str2[2], str2[3], str2[4]);




	return 0;
}