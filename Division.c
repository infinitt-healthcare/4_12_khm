#include <stdio.h>

double Div(const double a, const double b)

{
if (b == 0)
	{
		printf("0으로 나눌 수 없습니다.");
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
	printf("두 수를 입력하시오 : ");
	scanf("%lf %lf", &a, &b);

	result = Div(a,b);

	return 0;
}