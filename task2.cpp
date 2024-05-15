#include<iostream>
using namespace std;
int main()
{
	double retail_price;
	double tax_rate;
	double sales_tax,total_sales;
	
	cout<<"Enter the retail price: ";
	cin>>retail_price;
	cout<<"Enter sales tax in percentage";
	cin>>tax_rate;
	sales_tax=tax_rate/100 * retail_price;
	total_sales=sales_tax+retail_price;
	cout<<endl<<"The sales tax on the item is: "<<sales_tax<<endl;
	cout<<"The sale price of the given item is: " <<total_sales;
	return 0;
}
	
