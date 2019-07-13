#include<iostream>
using namespace std;
class A;
class B
{
	friend class A;
	private:
		int n;
		friend int compare(A&,B&);
	public:
		void set_data()
		{
			cout<<"enter the value : ";
			cin>>n;
		}
};
class A
{
    private:
         int m;
         friend int compare(A&,B&);
	public:
	   void set_data()
	   {
	   	 cout<<"enter the value : ";
			cin>>m;
		}
};
int compare(A&a,B&b)
{
	if(a.m>b.n)
	  cout<<"class A is greater than class B";
	else
	  cout<<"class B is greater than class A";  
}
main()
{
	A a;
	B b;
	a.set_data();
	b.set_data();
	compare(a,b);
	return 0;
}
