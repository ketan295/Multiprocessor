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
		cout<<"x ="<<x<<endl;		
	}
	operator++(int)
	{
		return x++;	
	}
    operator--(int)
	{
		return x--;	
	}

};
int main()
{
	points p1;
	p1.set(3);
	p1.get();
	p1++;
	p1.get();
	p1--;
	p1.get();
	return 0;
}

