#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
		int roll_no;
		char* course;
	public:
	    student(int r,char*c)
		{
		   roll_no=r;
		   strcpy(course,c);
		   cout<<"\nStudent's constructer called";	
		}
		void show_data()
		{
		    cout<<"\nROLL NUMBER : "<<roll_no;
			cout<<"\nCOURSE : "<<course;	
		}
		~student()
		{
		   cout<<"\nStudent's destructer called";	
		}	
};
class result : public student
{
	private:
		int marks[3];
	public:
	    result(int r,char*c,int m1,int m2,int m3) : student(r,c)
		{
		   	marks[0]=m1;marks[1]=m2;marks[2]=m3;
		   	cout<<"\nResult's constructer called";
		}
		~result()
		{
		   cout<<"\nResult's destructer called";	
		}
		void show_result()
		{
		    show_data();
			cout<<"Total marks of the student is : "<<(marks[0]+marks[1]+marks[2]);	
		}		
};
main()
{
	int r,m1,m2,m3;char* c;
	cout<<"\nenter the roll number : ";
	cin>>r;
	cout<<"\nenter the course name : ";
	cin.getline(c,10);
	cout<<"\nenter the marks : ";
	cin>>m1>>m2>>m3;
	result R(r,c,m1,m2,m3);
	R.show_result();
}
