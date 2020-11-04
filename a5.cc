/*
Write a C++ program to swap the values of two dynamically allocated variables 
and release the memory after swapping. (use new & delete operators)
*/
#include<iostream>
using namespace std;

void dynamic_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int *a = new int, *b = new int;

	cout<<"Enter the value of A and B:";
	cin>>*a>>*b;	

	cout<<"Before swapping\nA = "<<*a<<"\nB = "<<*b<<endl;
	dynamic_swap(a, b);
	cout<<"After swapping\nA = "<<*a<<"\nB = "<<*b<<endl;

	delete a, b;
		
	return 0;
}
