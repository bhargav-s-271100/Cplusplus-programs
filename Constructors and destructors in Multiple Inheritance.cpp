#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
		int roll_no;
		char* name;
	public:
		student(int r,char* c)
		{
			cout<"\nStudent's constructor called : ";
			roll_no=r;
			strcpy(name,c);
		}
		void show_data()
		{
			cout<<"\nSTUDENT NAME : "<<name;
			cout<<"\nROLL NUMBER : "<<roll_no;
		}
		~student()
		{
			cout<"\nStudent's destructor called : ";
		}
};
class marks
{
	private:
		int mark[3];
	public:
		marks(int m1,int m2,int m3)
		{
		    cout<"\nMark's constructor called : ";
			mark[0]=m1;mark[1]=m2;mark[2]=m3;
		}
		void show_marks()
		{
			cout<<"\nTOTAL MARKS : "<<(mark[0]+mark[1]+mark[2]);
		}
		~marks()
		{
			cout<"\nMark's destructor called : ";
		}
};
class result : public student,public marks
{
	public:
		result(int r,char* c,int m1,int m2,int m3) : student(r,c),marks(m1,m2,m3)
		{
			cout<"\nResult's constructor called : ";
		}
		void show_result()
		{
			show_data();
			show_marks();
		}
		~result()
		{
			cout<"\nResult's destructor called : ";
		}
};
main()
{
	char* c;int r,m1,m2,m3;
	cout<<"\nenter the name : ";
	cin>>c;
	cout<<"\nenter the roll number : ";
	cin>>r;
	cout<<"\nenter the marka : ";
	cin>>m1>>m2>>m3;
	result R(r,c,m1,m2,m3);
	R.show_result();
}
