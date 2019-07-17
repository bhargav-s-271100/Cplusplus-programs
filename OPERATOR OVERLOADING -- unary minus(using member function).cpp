//OPERATOR OVERLOADING using member function
#include<iostream>
using namespace std;
class number
{
	private : 
	    int n;
	public:
	    number(int num)
		{
			n=num;
		}
		number operator -()
		{
		     n=-n;	
		}
		void show_data()
		{
			cout<<"the negated number is : "<<n;
		}    
};
main()
{
	int num;
	cout<<"enter the number : ";
	cin>>num;
	number n(num);
	-n;
	n.show_data();
	return 0;
}

