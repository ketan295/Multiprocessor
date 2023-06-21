#include<iostream>
#include<string.h>
using namespace std;

class father {
	private:
		char f[];
		public:
		print()
		{
			cout<<"Today is which day?"<<endl;
		}
		void set(char d[])
		{
			strcpy(f,d);
		}
		void get()
		{
			cout<<d<<" "<<d<<endl;
	    }
	
};

int main()
{
	father f1,f2;
	f1.print();
	f1.set("Today is");
	f1.get();
	f2.set("Fathers day");
	f2.get();
	return 0;
}
