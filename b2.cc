/*2. Write a C++ program to create a class called COMPLEX and implement the following
overloading functions ADD that return a complex number:
(i) ADD (a, s2) – where ‘a’ is an integer (real part) and s2 is a complex number
(ii) ADD (s1, s2) – where s1 and s2 are complex numbers.
*/

#include<iostream>
using namespace std;

class COMPLEX
{
	int imaginary, real;
	public:
	COMPLEX()
	{
		imaginary = 0.0;
		real = 0.0;
	}
	COMPLEX(int r, int i)
	{
		imaginary = i;
		real = r;
	}

	friend COMPLEX add(int a, COMPLEX s2);	
	friend COMPLEX add(COMPLEX s1, COMPLEX s2);
	
	void display()
	{
		cout<<"Complex number is "<<real<<" + "<<imaginary<<"i\n";
	}

};

COMPLEX add(int a, COMPLEX s2)
{
	COMPLEX s;
	s.imaginary = s2.imaginary;
	s.real = a + s2.real;

	return s;
}

COMPLEX add(COMPLEX s1, COMPLEX s2)
{
	COMPLEX s;
	s.imaginary = s1.imaginary + s2.imaginary;
	s.real = s1.real + s2.real;

	return s;
}

int main()
{
	COMPLEX s1(2,5), s2(3,9), s3, s4;

	s3 = add(5, s2);
	s4 = add (s1, s2);

	s3.display();
	s4.display();
}
