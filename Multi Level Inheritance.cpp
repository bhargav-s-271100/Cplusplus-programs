#include<iostream>
using namespace std;
class student
{
	private:
		int roll_no;
	public:
	    student()
		{
		  cout<<"\nStudent's constructor called";	
		}	
		void get_data()
		{
			cout<<"\nenter the roll number : ";
			cin>>roll_no;
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
	    marks()
		{
		   cout<<"\nMark's constructor called";	
		}
		void get_marks()
		{
		    get_data();
			cout<<"\nenter the marks : ";
			cin>>mark[0]>>mark[1]>>mark[2];	
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
		result()
		{
			cout<<"\nResult's constructor called";	
		}
		void get_result()
		{
			get_marks();
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
	result r;
	r.get_result();
	r.show_result();
}
