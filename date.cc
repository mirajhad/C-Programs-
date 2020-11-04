#include<iostream>
using namespace std;

class Date
{
	int day, month, year;
	public:
	Date(int d, int m, int y) { day=d; month=m; year=y;}

	Date operator++(int x)
	{
        	if(month==12 && day==31) 
        	{
        	        day = 1;
        	        month = 1;
        	        year++;
        	}
		else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10)
		{
			if(day==31)
			{
				day=1;
				month++;
			}
		}
		else if(month==4 || month==6 || month==9 || month==11)
		{
			if(day==30)
			{
				day=1;
				month++;
			}
		}
		else if(leapyear() && month==2 && day==29)
		{
			day=1;
			month++;
		}
		else
		{
			day++;
		}
	}
	
	Date operator--(int x)
	{
        	if(month==1 && day==1) 
        	{
        	        day = 31;
        	        month = 12;
        	        year--;
        	}
		else if(month==2 || month==4 || month==6 || month==9 || month==11)
		{
			if(day==1)
			{
				day=31;
				month--;
			}
		}
		else if(month==5 || month==7 || month==10 || month==12)
		{
			if(day==1)
			{
				day=30;
				month--;
			}
		}
		else if(leapyear() && month==3 && day==1)
		{
			day=29;
			month--;
		}
		else
		{
			day--;
		}
	}

	friend void operator<<(ostream&, Date&);

	bool leapyear()
	{
		if(year%4==0 && year%400!=0)
			return true;
		else
			return false;
	}
};

void operator<<(ostream& cout, Date & d)
{
	cout<<"Date is "<<d.day<<"/"<<d.month<<"/"<<d.year<<endl;
}



int main()
{
	Date d1(29,2,2012);

	d1--;
	cout<<d1;
}



