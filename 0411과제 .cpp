//cpp type Division 

#include <iostream>
#inlcude <stdexcaption>
using namespace std;

//예외처리 1. 다른 데이터 타입 입력시 2. 0 입력 시 
class Calc {


public:
	virtual double calc(const double a, const double b) = 0;
};
class DivCalc : public Calc {
public:
	virtual double calc(const double a, const double b) override
	{
		if (b == 0)
		{
			cout << "0으로 나눌 수 없습니다." << endl;
		}
		else
		{
			return a / b;
		}
	}
};

/*

static 


virtual int input() override {

char buffer1[256]

while (true) 
for (inr i = 0; i < strlen(buffer1); i++)

}

*/

int main()
{
	double a, b;
	double result;
	cout << "두 정수를 입력하시오! " << endl; 
	cin >> a >> b ;


	DivCalc divcalc;
	Calc& A = divcalc;
	result = A.calc(a, b);

	cout << a << " / " << b << " = " << result << endl;

	return 0;
}