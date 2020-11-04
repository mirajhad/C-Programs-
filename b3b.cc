/*3.Friend functions and friend classes:
b) Write a program to accept the student detail such as name and 3 different marks by get_data()
method and display the name and average of marks using display() method. Define a friend class
for calculating the average of marks using the method mark_avg().
*/
#include<iostream>
using namespace std;

class Student
{
	string name;
	int marks[3];
	float avg;

	public:
	void get_data()
	{
		cout<<"Enter the student name: ";
		cin>>name;

		cout<<"Enter the marks in three tests:\n";
		cin>>marks[0]>>marks[1]>>marks[2];
	}

	void display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Average marks:"<<avg<<endl;
	}

	friend class Average;
};

class Average
{
	public:
	void mark_avg(Student &s)
	{
		s.avg=(s.marks[0]+s.marks[1]+s.marks[2])/3.0;
	}
};

int main()
{
	Student s;
	Average a;
	s.get_data();
	a.mark_avg(s);
	s.display();

	return 0;
}

