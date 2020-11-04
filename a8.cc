/*
8. Write a C++ program to create a template function for Bubble Sort 
and demonstrate sorting of integers and doubles.
*/

#include<iostream>
using namespace std;

template <typename T>
void bubble_sort(T *a, int n)
{
	T temp;

	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main()
{
	int choice, n;
	cout<<"MENU: \n1.Sort 'Double' array.\n2.Sort 'Integer' array.\n\n";
	cout<<"Enter your choice:";
	cin>>choice;
	if(choice==1)
	{
		cout<<"Enter the number of elements in the array:";
		cin>>n;
		double a[n];
		cout<<"Enter the array elements:\n";
		for(int i=0;i<n;i++)
			cin>>a[i];

		bubble_sort(a,n);

		cout<<"Array after sorting in ascending order:\n";
		for(int i=0;i<n;i++)
			cout<<a[i]<<endl;
		cout<<endl;
	}
	else if(choice==2)
	{
		cout<<"Enter the number of elements in the array:";
		cin>>n;
		int a[n];
		cout<<"Enter the array elements:\n";
		for(int i=0;i<n;i++)
			cin>>a[i];

		bubble_sort(a,n);

		cout<<"Array after sorting in ascending order:\n";
		for(int i=0;i<n;i++)
			cout<<a[i]<<endl;
	}
	else
	{
		cout<<"Invalid choice.Try again.\n";
	}

	return 0;

}
