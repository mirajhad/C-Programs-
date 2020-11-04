/*
1.Define a STUDENT class with USN, Name, and Marks in 3 tests of a subject. 
Declare an array of 10 STUDENT objects. Using appropriate functions, find 
the average of the two better marks for each student. Print the USN, Name 
and the average marks of all the students.
*/
#include<iostream>
using namespace std;

class STUDENT
{
	string usn, name;
	int m1,m2,m3;
	double avg;
	
	public:
	void set_data()
	{
		cout<<"Student Name:";
		cin>>name;
		cout<<"USN:";
		cin>>usn;
		cout<<"Marks in three tests:\n";
		cin>>m1>>m2>>m3;
	}	
	
	void average()
	{
		if(m1<m2 && m2<m3)
			avg = (m2+m3)/2.0;
		else if(m2<m3)
			avg = (m1+m3)/2.0;
		else
			avg = (m1+m2)/2.0;
	}

	void display()
	{
		cout<<"\n\nStudent Name:"<<name<<endl;
		cout<<"USN:"<<usn<<endl;
		cout<<"Average marks:"<<avg<<"\n\n";
	}
};

int main()
{
	STUDENT s[10];

	for(int i=0;i<3;i++)
	{
		cout<<"Enter the details of student "<<i+1<<":\n";
		s[i].set_data();
		s[i].average();
	
	}

	for(int i=0;i<3;i++)
		s[i].display();
		
	return 0;
}
