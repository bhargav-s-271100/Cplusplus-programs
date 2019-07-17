//OPERATOR OVERLOADING using friend function
#include<iostream>
using namespace std;
class Number
{
	private : 
	    int n;
	public:
	    Number(int num)
		{
			n=num;
		}
		friend Number& operator -(Number& );
		void show_data()
		{
			cout<<"the negated number is : "<<n;
		}
};
Number& operator -(Number &m)
{
    m.n = -(m.n);
    return m;
}
main()
{
	int num;
	cout<<"enter the number : ";
	cin>>num;
	Number m(num);
	Number o=-m;
	o.show_data();
	return 0;
}
