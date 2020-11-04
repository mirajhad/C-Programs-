/*
7. Write a program to calculate the volume of different geometric shapes like cube,
cylinder and sphere and hence implement the concept of Function Overloading.
*/

#include<iostream>
using namespace std;

void volume(int a)
{
	int vol = a*a*a;
	cout<<"Volume of the cube = "<<vol<<" cubic meters"<<endl;
}

void volume(double r, double h)
{
	double vol = 3.14*r*r*h;
	cout<<"Volume of the cylinder = "<<vol<<" cubic meters"<<endl;
}

void volume(double r)
{
	double vol = (4/3)*3.14*r*r*r;
	cout<<"Volume of the sphere = "<<vol<<" cubic meters"<<endl;
}

int main()
{
	int a, choice;
	double r, h;
	cout<<"Menu:\n1.Volume of Cube.\n2.Volume of Cylinder.\n3.Volume of Sphere.\n";
	cout<<"\nEnter your choice:";
	cin>>choice;

	if(choice==1)
	{
		cout<<"Enter the length of a side:";
		cin>>a;
		volume(a);
	}
	else if(choice==2)
	{
		cout<<"Enter the value of radius and height:";
		cin>>r>>h;
		volume(r, h);

	}
	else if(choice==3)
	{
		cout<<"Enter the value of radius:";
		cin>>r;
		volume(r);
	}
	else
	{
		cout<<"Invalid choice.Try again.\n";
	}

	return 0;
}
