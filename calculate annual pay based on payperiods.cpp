#include<iostream>
using namespace std;
int main()
{
	int payAmount,payPeriods,annualPay;
	payAmount = 2200;
	payPeriods = 26;
	annualPay = payAmount * payPeriods;
	cout << endl << "The annual pay of the employee is: " << annualPay<<"$";
	return 0;
}
