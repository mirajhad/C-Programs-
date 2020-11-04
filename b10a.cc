//10. a.Write a program to concatenate 2 strings using STL String class functions.

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1,s2;

	cout<<"Enter string 1: ";
	getline(cin, s1);

	cout<<"Enter string 2: ";
	getline(cin, s2);

	s1.append(s2);

	cout<<"String after concatenation: "<<s1<<endl;	

	return 0;
}


