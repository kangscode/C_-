#include<stdio.h>

//int add(int n1, int n2)
//{
//	return n1 + n2;
//}

void add2(int n1, int n2)
{
	printf("���� ���: %d\n", n1 + n2);
}

void add(int n1, int n2)
{
	printf("���� ��: %d\n", n1 + n2);
}

void sub(int n1, int n2) 
{
	printf("�� ��: %d\n", n1 - n2);
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
		printf("���� ��: %d\n", mul(n1, n2));
		break;
	case '/':
		printf("���� ��: %d\n", div(n1, n2));
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
	// �Լ��� ����
	// ��ȯ��: �Լ� ������ �۾��� ��ġ�� ���� ��ȯ���� �� ����� �ڷ���
	// �Լ� �̸�: �Լ��� ����ϱ� ���� ȣ���� �� ����� �̸�
	// �Ű� ����: �Լ��� ȣ���� �� ���� ������ �� �ִµ�, �� �� ���� �����ϴ� ����
	// �Լ� ���: �Լ��� ����� �þ��� �ڵ���� �ۼ��Ǵ� ����

	// �Լ��� ȣ��
	// ��ȯ���� ������ ����: �Լ��� ��ȯ���ִ� ���� ������ ����
	// ȣ���� �Լ� �̸�: ���ǵ� �Լ� �� ����� �Լ��� �̸�
	// �μ�: �Լ��� ������ �� �ʿ��� ��

	
	//int result;

	//result = add(14, 13);

	//printf("���� ���: %d\n", result);

	//add2(8, 36);


	int n1, n2;
	printf("�� �� �Է�: ");
	scanf("%d%d", &n1, &n2);

	add(n1, n2);
	sub(n1, n2);
	printf("���� ��: %d\n", mul(n1, n2));
	printf("���� ��: %d\n", div(n1, n2));
	

	char op;
	printf("���� �Է�: ");
	scanf("%d %c%d", &n1, &op, &n2);

	calc(n1, op, n2);

	
	int kor, mat, eng, total;
	double avg;
	char grade;
	printf("����, ����, ���� ���� �Է�; ");
	scanf("%d%d%d", &kor, &mat, &eng);

	total = Total(kor, mat, eng);
	avg = Avg(total);
	grade = Grade(avg);

	printf("����: %d\n", total);
	printf("���: %.2lf\n", avg); 
	printf("���: %c\n", grade);


	return 0;
}