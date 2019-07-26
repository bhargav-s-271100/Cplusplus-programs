#include<iostream>
using namespace std;
class base
{
	private:
		int x;
	public:
	    base(int a)
		{
		   x=a;	
		}	
		void show()
		{
			cout<<"\nIn Base Class : X ="<<x;
		}
};
class derived : public base
{
	private:
		int y;
	public:
		derived(int a,int b):base(a)
		{
			y=b;
		}
		void show()
		{
			cout<<"\nIn Derived Class : Y ="<<y;
		}
};
main()
{
	base B(10);
	derived D(20,30);
	B=D;
	B.show();
}
