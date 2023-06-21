#include<iostream>
#include<string.h>
using namespace std;

class points
{
	int x;
	public:
	void set(int x)
	{
		this->x=x;
	}
	
	void get()
	{
		cout<<"Distance in feet ="<<x<<endl;
	}
	points operator+(points n)
	{
		points temp;
		temp.x=this->x+n.x;
		return temp;	
	}

	
};
int main()
{
	points p1,p2,p3;
	p1.set(3);
	p1.get();
	p2.set(6);
	p2.get();
	p3=p1+p2;
	p3.get();
	return 0;
}

