#include<iostream>
using namespace std;
class number
{
	private:
		int x;
	public:
	    number(int n)
		{
			x=n;
		}
		void show_data()
		{
		  cout<<"\nthe number is : "<<x;	
		}
		void operator ++()
		{
		   cout<<"\nthe incremented(prefix) number is : "<<++x;	
		}
		friend void operator ++(number,int);	
};
void operator ++(number n,int)
{
	n.x=n.x+1;
	cout<<"\nthe incremented(postfix) number is : "<<n.x;
}
main()
{
    int num;
	cout<<"enter the number : ";
    cin>>num;
	number n(num);
    n.show_data();
	++n;
	n++;
	return 0;
}
