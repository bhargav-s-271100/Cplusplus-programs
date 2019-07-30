#include<iostream>
using namespace std;
class base
{
	private:
		int x;
	public:
		base(int a)
		{
			cout<<"\nBase Constructor called";
			x=a;
		}
		virtual void show()
		{
		      cout<<"\nIn Base class,value is "<<x;		
		}
		virtual ~base()
		{
			cout<<"\nBase Destructor called";
		}
};
class derived:public base
{
	private:
		int y;
	public:
		derived(int a,int b):base(a)
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
			cout<<"\nDerived Destructor called";
		}
};
main()
{
	base *bptr,B(10);
	bptr=&B;
	bptr->show();
	bptr=new derived(10,20);
	bptr->show();
}
