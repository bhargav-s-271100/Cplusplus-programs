#include<iostream>
using namespace std;
class base
{
	public:
		virtual void show()=0;
};
class derived:public base
{
	private:
		int y;
	public:
		derived(int b)
		{
			cout<<"\nDerived Constructor called";
			y=b;
		}
		void show()
		{
		    cout<<"\nIn Derived class,value is "<<y;	
		}
		~derived()
		{
			cout<<"\nDerived Constructor called";
		}
};
main()
{
	base *bptr;
	derived D(10);
	bptr=&D;
	bptr->show();
}
