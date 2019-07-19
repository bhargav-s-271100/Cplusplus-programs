#include<iostream>
using namespace std;
class number
{
	public:
	    int x;
		number()
	    {
	    	x=0;
		}
	    number(int n)
		{
			x=n;
		}
		number operator +=(number m)
		{
		   x+=m.x;
		   return *this;	
		}
	    number operator -=(number p)
		{
			x-=p.x;
			return *this;
		}	
};
main()
{
    number m(20),n(20);
    m+=n;
    cout<<"object m  +=  object n = "<<m.x;
    number o(20),p(10);
    o-=p;
	cout<<"\n"<<"object o  -=  object p = "<<o.x;
	return 0;
}
