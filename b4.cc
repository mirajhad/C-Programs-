/*Create a class called MATRIX using two-dimensional array of integers. Implement the following
operations by overloading the operator == which checks the compatibility of two matrices to be
added and subtracted. Perform the addition and subtraction by overloading the + and –
operators respectively. Display the results by overloading the operator <<. If (m1== m2) then m3
= m1+m2 and m4 = m1- m2 else display error.
*/

#include<iostream>
using namespace std;

class MATRIX
{
	int row,col,a[20][20];
	public:

	void set_matrix()
	{
		cout<<"Enter the number of rows and columns: ";
		cin>>row>>col;

		cout<<"Enter the matrix elements:\n";
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
				cin>>a[i][j];		
	}

	bool operator==(MATRIX &m)
	{
		if(row==m.row && col==m.col)
			return true;
		else
			return false;
	}

	MATRIX operator+(MATRIX &m)
	{
		MATRIX m3;
		m3.row = row;
		m3.col = col;
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
				m3.a[i][j] = a[i][j] + m.a[i][j];

		return m3;
	}

	MATRIX operator-(MATRIX &m)
	{
		MATRIX m4;
		m4.row = row;
		m4.col = col;
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
				m4.a[i][j] = a[i][j] - m.a[i][j];

		return m4;
	}

	friend void operator<<(ostream &cout, MATRIX &m);
};

void operator<<(ostream &cout, MATRIX &m)
{
	for(int i=0;i<m.row;i++)
	{
		for(int j=0;j<m.col;j++)
			cout<<m.a[i][j]<<"\t";
		cout<<"\n";
	}
}

int main()
{
	MATRIX m1,m2,m3,m4;

	cout<<"Matrix A:\n";
	m1.set_matrix();
	cout<<"Matrix B:\n";
	m2.set_matrix();

	if(m1==m2)
	{
		m3=m1+m2;
		m4=m1-m2;

		cout<<"Addition of Matrices:\n";
		cout<<m3;
		cout<<"Subtraction of Matrices:\n";
		cout<<m4;

	}
	else
		cout<<"Matrices are not compatible for addition or subtraction.\n";

	return 0;
}
