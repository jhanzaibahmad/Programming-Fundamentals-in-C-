#include <iostream>
using namespace std;

//template <typename P>
//void swap(P& a, P& b)
//{
//	P temp = a;
//	a = b;
//	b = temp;
//}

template <typename Q>
void SortParameters( Q& a,  Q& b)
{
	if (a > b)
	{
		Q temp = a;
		a = b;
		b = temp;
	}
}

template <typename R>
void SortParameters(R& a, R& b,R& c)
{
	if (a > b)
	{
		R temp = a;
		a = b;
		b = temp;
		if (a > c)
		{
			R temp = a;
			a = c;
			c = temp;
		}
	}
	else
	{
		if (a > c)
		{
			R temp = a;
			a = c;
			c = temp;
		}
		if (b > c)
		{
			R temp = b;
			b = c;
			c = temp;
		}
	}
}

int main()
{
	float a, b,c;
	int e, d;


	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	SortParameters(a, b);

	cout << "The first number is: " << a << endl;
	cout<<"The second number is: " << b << endl;

	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter third number: ";
	cin >> c;
	SortParameters(a, b,c);

	cout << "The first number is: " << a << endl;
	cout << "The second number is: " << b << endl;
	cout << "The third number is: " << c << endl;

	
}