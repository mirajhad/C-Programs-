/*5. Write a program to create an HUMAN class with features as number of Head, Legs, Hands.
(NOTE: Number of Head, Legs and Hands are of integer types)
a. Create an object HUMAN1 using default constructor. (Default features to have 1 Head, 2 Legs and 2 Hands)
b. Create an object HUMAN2 with customized inputs using Parameterized Constructor
c. Create an object HUMAN3 using existing object HUMAN1 (Copy Constructor).
d. All Humans die after their lifetime. (Destructor)
*/

#include<iostream>
using namespace std;

class HUMAN
{
	int head, legs, hands;
	public:
	HUMAN()
	{
		head = 1;	
		legs = 2;
		hands = 2;
		cout<<"A human being with 1 head, 2 legs, and two hands is born!\n";
	}

	HUMAN(int a, int b, int c)
	{
		head = a;
		legs = b;
		hands = c;
		cout<<"A human being with "<<head<<" head, "<<legs<<" legs, and "<<hands<<" hands is born!\n";
	}

	HUMAN(const HUMAN &h)
	{
		head = h.head;
		legs = h.legs;
		hands = h.hands;
		cout<<"A human being replica with "<<head<<" head, "<<legs<<" legs, and "<<hands<<" hands is created!\n";
	}

	~HUMAN()
	{
		head = 0;
		legs = 0;
		hands = 0;
		cout<<"All men DIE.Bye Bye!\n";
	}

};

int main()
{
	HUMAN human1;
	HUMAN human2(10, 2, 20);
	HUMAN human3 = human1;

	return 0;
}
