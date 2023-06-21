#include<iostream>
#include<string.h>
using namespace std;
class A 
{
	public:
	int  x=5,y=10;
	int r,l,b,L,B,H,area,volume;
	public:
	int get()
	{
		cout<<x+y<<endl;
	
	}
	int get(int r)
	{
		area=3.14*r*r;
		cout<<area<<endl;
	}
	int get(int l , int b)
	{
		area=l*b;
	    cout<<area<<endl;
	}
	int get(int L , int B , int H)
	{
		volume=L*B*H;
		cout<<volume<<endl;
	}
};
int main()
{
	A obj;
	cout<<"sum is :"<<endl;
	obj.get();
	cout<<"area of square is :"<<endl;
	obj.get(2);
	cout<<"area of rectangle is :"<<endl;
	obj.get(2,3);
	cout<<"volume of cube is :"<<endl;
	obj.get(2,3,5);	
	
	return 0;
}
