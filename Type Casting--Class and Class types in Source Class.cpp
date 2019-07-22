#include<iostream>
using namespace std;
class square
{
	public:
	   	int side;
	    square(int n)
		{
			side=n;
		}
		void show_data()
		{
			cout<<"\nthe side of square is : "<<side<<" units";
			cout<<"\nthe area of square is : "<<(side*side)<<" sq.units\n";
		}	
};
class rectangle
{
	private:
		int length,breadth;
	public:
	    rectangle(int l,int b)
		{
		   length=l;
		   breadth=b;	
		}
		void show_data()
		{
		    cout<<"\nFor rectangle length is "<<length<<" units and breadth is "<<breadth<<" units";
			cout<<"\nthe area of rectangle is : "<<(length*breadth)<<" sq.units";	
		}
		operator square()
		{
		    if(length<breadth)
		   	   square s1(length);
			else
			   square s1(breadth);	  	
		}	
};
main()
{
	rectangle r(1,2);
	r.show_data();
	square s(1);
	s.show_data();
	cout<<"Rectangle converted into square is : \n";
	square s1=r;
	s1.show_data();
}
