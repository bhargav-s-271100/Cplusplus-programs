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
			cout<<"the side of square is : "<<side<<" units";
			cout<<"\nthe area of square is : "<<(side*side)<<" sq.units";
		}	
};
class rectangle
{
	private:
		int length,breadth;
	public:
	    rectangle(square s)
		{
		   length=s.side;
		   breadth=s.side;	
		}
		void show_data()
		{
		    cout<<"For rectangle length is "<<length<<" units and breadth is "<<breadth<<" units";
			cout<<"\nthe area of rectangle is : "<<(length*breadth)<<" sq.units";	
		}	
};
main()
{
	square s(10);
	s.show_data();
	rectangle r=s;
	r.show_data();
}
