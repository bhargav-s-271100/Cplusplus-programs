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
		    cout<<"\nthe value is "<<x;	
		}	
};
class derived
{
	private:
		int y;
	public:
	    void get_data()
		{
		   cout<<"\nenter the value : ";
		   cin>>y;	
		}
	    void show_data()
		{
		    cout<<"\nthe value is "<<y;	
		}	
};
main()
{
	base b,*B;
	derived d,*D;
	B=&b;
	B->get();
	B->show();
	D=&d;
	D->get_data();
	D->show_data(); 
}
