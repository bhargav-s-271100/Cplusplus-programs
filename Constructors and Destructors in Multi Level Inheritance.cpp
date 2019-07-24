#include<iostream>
using namespace std;
class student
{
	private:
		int roll_no;
	public:
	    student(int r)
		{
		  cout<<"\nStudent's constructor called";
		  roll_no=r;	
		}	
		void show_data()
		{
			cout<<"\nROLL NUMBER : "<<roll_no;
		}
		~student()
		{
			cout<<"\nStudent's destructor called";
		}
};
class marks : public student
{
	private:
		int mark[3];
	public:
	    marks(int r,int m1,int m2,int m3) : student(r)
		{
		   cout<<"\nMark's constructor called";	
		   mark[0]=m1;mark[1]=m2;mark[2]=m3;
		}
		void show_marks()
		{
			show_data();
			cout<<"\nTOTAl MARKS : "<<(mark[0]+mark[1]+mark[2]);
		}
		~marks()
		{
		   cout<<"\nMark's destructor called";		
		}
};
class result : public marks
{
	public:
		result(int r,int m1,int m2,int m3) : marks(r,m1,m2,m3)
		{
			cout<<"\nResult's constructor called";	
		}
		void show_result()
		{
			show_marks();
		}
		~result()
		{
			cout<<"\nResult's destructor called";	
		}
};
main()
{
	int r,m1,m2,m3;
	cout<<"\nenter the roll number : ";
	cin>>r;
	cout<<"\nenter the marks : ";
	cin>>m1>>m2>>m3;	
	result R(r,m1,m2,m3);
	R.show_result();
}	
