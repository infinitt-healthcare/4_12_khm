#include <stdio.h>

double Div(const double a, const double b)

{
if (b == 0)
	{
		printf("0���� ���� �� �����ϴ�.");
	}

else 
	{
		return  a / b;
	}
}

int main(void)
{
	double a, b;
	double result;
	printf("�� ���� �Է��Ͻÿ� : ");
	scanf("%lf %lf", &a, &b);

	result = Div(a,b);

	return 0;
}