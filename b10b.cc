//b.Write a simple C++ program to store and display integer elements using STL Vector class.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int c, i=0;
	vector<int> v;

	while(true)
	{
		cout<<"Enter the element:";
		cin>>c;
		v.push_back(c);

		cout<<"Press 1 to enter more. Press 2 to display:";
		cin>>c;
	
		if(c!=1)
			break;
	}
	
	cout<<"Elements in the array:\n";
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<endl;

	return 0;
}
