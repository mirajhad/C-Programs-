/*
2. Write a C++ program to swap the values of two variables and demonstrates
a function using Call by value.
*/
#include<iostream>
using namespace std;

void value_swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;

	cout<<"After swapping\nA = "<<a<<"\nB = "<<b<<endl;
}

int main()
{
	int a,b;
	
	cout<<"Enter the value of A and B:";
	cin>>a>>b;

	cout<<"Before swapping\nA = "<<a<<"\nB = "<<b<<endl;
	value_swap(a,b);

	return 0;
}
