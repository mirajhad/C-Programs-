/*Demonstrate Simple Inheritance concept by creating a base class FATHER with data members
SurName and BankBalance and creating a derived class SON, which inherits SurName and
BankBalance feature from base class but provides its own feature FirstName and DOB. Create
and initialize F1 and S1 objects with appropriate constructors and display the Father & Son
details. (Hint : While creating S1 object, call Father base class parameterized constructor
through derived class by sending values)
*/

#include<iostream>
using namespace std;

class FATHER
{
	protected:
	string surname;
	double bank_balance;
	public:
	FATHER()
	{
		
	}

	FATHER(string s, double b)
	{
		surname = s;
		bank_balance = b;
	}

	void display()
	{
		cout<<"SurName: "<<surname<<endl;
		cout<<"Bank Balance: Rs."<<bank_balance<<"\n\n";
	}
};

class SON : public FATHER
{
	string firstname;
	string dob;
	public:
	SON()
	{
		
	}
	
	SON(string s, double b, string f, string d) : FATHER(s, b)
	{
		firstname = f;
		dob = d;
	}
	
	void display()
	{
		cout<<"Name: "<<firstname<<" "<<surname<<endl;
		cout<<"DoB: "<<dob<<endl;
		cout<<"Bank Balance: Rs."<<bank_balance<<"\n\n";
	}
};


int main()
{
	FATHER f1("Singh",279000.0);
	SON s1("Singh", 279000.0, "Gabbar", "1/1/1971");

	cout<<"Father Details:\n";
	f1.display();
	cout<<"Son Details:\n";
	s1.display();

	return 0;
}
