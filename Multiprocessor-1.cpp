#include<iostream>
#include<string.h>
using namespace std;

class Father
{
	private :
		char Message1[];
		
		public :
			Father(char Message2[])
			{
				strcpy(Message1,Message2);
			}
			void set(char Message2[])
			{
				cout<<Message1<<" "<<Message2<<endl;
			}
};
int main()
{
	Father f;
	cout<<"Today is which day ?"<<endl;
	Father m("Today is");
	f.set("fathers day.");
}