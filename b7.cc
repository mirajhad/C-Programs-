/*
7. Create an abstract base class EMPLOYEE with data members: Name, EmpID and BasicSal and a
pure virtual function Cal_Sal().Create two derived classes MANAGER (with data members: DA
and HRA) and SALESMAN (with data members: DA, HRA and TA). Write appropriate constructors
and member functions to initialize the data, read and write the data and to calculate the net
salary. The main() function should create array of base class pointers/references to invoke
overridden functions and hence it implements run-time polymorphism.
*/

#include<iostream>
using namespace std;

class EMPLOYEE
{
	protected:
	string name, empID;
	int basicSal;
	public:
	EMPLOYEE() {}
	EMPLOYEE(string n, string e, int b)
	{
		name = n;
		empID = e;
		basicSal = b;
	}

	virtual void set_data()
	{
		cout<<"Enter the Employee Name: ";
		cin>>name;
		cout<<"Enter the Employee ID: ";
		cin>>empID;
		cout<<"Enter the Basic Salary: ";
		cin>>basicSal;
	}

	virtual void show_data()
	{
		cout<<"Employee Name: "<<name<<endl;
		cout<<"Employee ID: "<<empID<<endl;
		cout<<"Basic Salary: Rs."<<basicSal<<endl;
	}

	virtual int cal_sal() = 0;
};

class MANAGER : public EMPLOYEE
{
	int da,hra;
	public:
	MANAGER(string n, string e, int b, int d, int h) : EMPLOYEE(n,e,b)
	{
		da = d;
		hra = h;
	}

	void set_data()
	{
		cout<<"Enter the Employee Name: ";
		cin>>name;
		cout<<"Enter the Employee ID: ";
		cin>>empID;
		cout<<"Enter the Basic Salary: ";
		cin>>basicSal;
		cout<<"Enter the Dearness Allowance: ";
		cin>>da;
		cout<<"Enter the House Rent Allowance: ";
		cin>>hra;
	}

	void show_data()
	{
		cout<<"Employee Name: "<<name<<endl;
		cout<<"Employee ID: "<<empID<<endl;
		cout<<"Basic Salary: Rs."<<basicSal<<endl;
		cout<<"Dearness Allowance: Rs."<<da<<endl;
		cout<<"House Rent Allowance: Rs."<<hra<<endl;
	}

	int cal_sal()
	{
		return basicSal+da+hra; 
	}
};

class SALESMAN : public EMPLOYEE
{
	int da, hra, ta;
	public:
	SALESMAN(string n, string e, int b, int d, int h, int t) : EMPLOYEE(n,e,b)
	{
		da = d;
		hra = h;
		ta = t;
	}

	void set_data()
	{
		cout<<"Enter the Employee Name: ";
		cin>>name;
		cout<<"Enter the Employee ID: ";
		cin>>empID;
		cout<<"Enter the Basic Salary: ";
		cin>>basicSal;
		cout<<"Enter the Dearness Allowance: ";
		cin>>da;
		cout<<"Enter the House Rent Allowance: ";
		cin>>hra;
		cout<<"Enter the Travel Allowance: ";
		cin>>ta;

	}

	void show_data()
	{
		cout<<"Employee Name: "<<name<<endl;
		cout<<"Employee ID: "<<empID<<endl;
		cout<<"Basic Salary: Rs."<<basicSal<<endl;
		cout<<"Dearness Allowance: Rs."<<da<<endl;
		cout<<"House Rent Allowance: Rs."<<hra<<endl;
		cout<<"Travel Allowance: Rs."<<ta<<endl;

	}

	int cal_sal()
	{
		return basicSal+da+hra+ta;
	}
};

int main()
{
	EMPLOYEE *emp;
	MANAGER mgr("Anand","A1221",25600,12800,10000);
	SALESMAN sls("Karan","A3211",12800,6400,5800,3000);

	emp = &mgr;
	emp->set_data();
	emp->show_data();
	cout<<"\nNet Salary of the manager is Rs."<<emp->cal_sal()<<"\n\n";

	emp = &sls;
	emp->set_data();
	emp->show_data();
	cout<<"\nNet Salary of the salesman is Rs."<<emp->cal_sal()<<"\n\n";

	


	return 0;
}
