//cpp type Division 

#include <iostream>
#inlcude <stdexcaption>
using namespace std;

//����ó�� 1. �ٸ� ������ Ÿ�� �Է½� 2. 0 �Է� �� 
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
			cout << "0���� ���� �� �����ϴ�." << endl;
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
	cout << "�� ������ �Է��Ͻÿ�! " << endl; 
	cin >> a >> b ;


	DivCalc divcalc;
	Calc& A = divcalc;
	result = A.calc(a, b);

	cout << a << " / " << b << " = " << result << endl;

	return 0;
}