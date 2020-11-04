/*6. Write a program to find the largest, smallest & second largest of three numbers.
(use inline function MAX and MIN to find largest & smallest of 2 numbers)
*/
#include<iostream>
using namespace std;

inline int MAX(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}

inline int MIN(int a, int b)
{
	if(a<b)
		return a;
	else
		return b;
}


int main()
{
	int a, b, c, max, min, max2;
	
	cout<<"Enter three numbers:";
	cin>>a>>b>>c;

	max = MAX(a,b);
	max = MAX(max,c);

	min = MIN(a,b);
	min = MIN(min,c);
	
	max2 = a+b+c-max-min;

	cout<<"Largest of the three numbers is "<<max<<endl;
	cout<<"Smallest of the three numbers is "<<min<<endl;
	cout<<"Second largest of the three numbers is "<<max2<<endl;
		
	return 0;
}
