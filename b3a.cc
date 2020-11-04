/*3. Friend functions and friend classes:
a) Write a program to define class name HUSBAND and WIFE that holds the income respectively.
Calculate and display the total income of a family using Friend function.
*/

#include<iostream>
using namespace std;

class WIFE;

class HUSBAND
{
	float income;
	public:
	HUSBAND(float i)
	{
		income = i;
	}

	friend void total_income(HUSBAND &h, WIFE &w);
};

class WIFE
{
	float income;
	public:
	WIFE(float i)
	{
		income = i;
	}
	friend void total_income(HUSBAND &h, WIFE &w);
};

void total_income(HUSBAND &h, WIFE &w)
{
	float family_income = h.income + w.income;
	cout<<"Total income of the family is "<<family_income<<" rupees"<<endl;
}

int main()
{
	float hi,wi;
	cout<<"Enter the income of Husband: ";
	cin>>hi;
	cout<<"Enter the income of Wife: ";
	cin>>wi;

	HUSBAND h(hi);
	WIFE w(wi);

	total_income(h,w);

	return 0;
}
