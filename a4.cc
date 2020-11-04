/*
4. Write a C++ program to swap the values of two variables and demonstrates a function using Call
by reference using pointer(*).
*/
#include<iostream>

using namespace std;

void pointer_swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int a,b;
	
	cout<<"Enter the value of A and B:";
	cin>>a>>b;

	cout<<"Before swapping:\nA = "<<a<<"\nB = "<<b<<endl;
	pointer_swap(&a,&b);

	cout<<"After swapping:\nA = "<<a<<"\nB = "<<b<<endl;

	return 0;
}
