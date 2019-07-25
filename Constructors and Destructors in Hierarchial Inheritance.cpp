#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
		int roll_no;
		char* name;
	public:
		student(int r)
		{
			cout<"\nStudent's constructor called : ";
			roll_no=r;
		}
		void show_data()
		{
			cout<<"\nROLL NUMBER : "<<roll_no;
		}
		~student()
		{
			cout<"\nStudent's destructor called : ";
		}
};
class marks : public student
{
	private:
		int mark[3];
	public:
		marks(int r,int m1,int m2,int m3) : student(r)
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
class result : public student
{
	private:
		int ID;
	public:
		result(int i,int r) : student(r)
		{
			cout<"\nResult's constructor called : ";
			ID=i;
		}
		void show_result()
		{
			show_data();
			cout<<"\nSTUDENT ID : "<<ID;
		}
		~result()
		{
			cout<"\nResult's destructor called : ";
		}
};
main()
{
	int r,i,m1,m2,m3;
	cout<<"\nenter the ID : ";
	cin>>i;
	cout<<"\nenter the roll number : ";
	cin>>r;
	cout<<"\nenter the marks : ";
	cin>>m1>>m2>>m3;
	result R(i,r);
	R.show_result();
	marks M(r,m1,m2,m3);
	M.show_marks();
}
