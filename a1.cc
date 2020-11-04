/*
1. Write a C++ program to find the sum for the given variables using
function with default arguments.
*/
#include<iostream>
using namespace std;

void sum(int a=0, int b=0, int c=0)
{
	int sum = a + b + c;

	cout<<"Sum = "<<sum<<endl;
}

int main()
{
	int a,b,c;
	
	cout<<"Enter the value of A, B, and C:";
	cin>>a>>b>>c;

	cout<<"sum of three numbers:\n";
	sum(a,b,c); 
	cout<<"sum of three numbers with default value for C:\n";
	sum(a,b);   
	cout<<"sum of three numbers with default value for B and C:\n";
	sum(a);     
	cout<<"sum of three numbers with default value for A, B, and C:\n";
	sum();	    
	return 0;
}
