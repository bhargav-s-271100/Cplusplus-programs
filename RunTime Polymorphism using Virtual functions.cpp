#include<iostream>
using namespace std;
class base
{
	private:
		int x;
	public:
	    void get()
		{
		   cout<<"\nenter the value : ";
		   cin>>x;	
		}
	    virtual	void show()
		{
		    cout<<"the value is "<<x;	
		}	
};
class derived
{
	private:
		int y;
	public:
	    void get()
		{
		   cout<<"\nenter the value : ";
		   cin>>y;	
		}
	    void show();	
};
main()
{
	base b,*B;
	derived d,*D;
	B=&b;
	B->get();
	B->show();
	D=&d;
	D->get();
	D->show(); 
}
