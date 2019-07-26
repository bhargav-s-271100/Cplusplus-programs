#include<iostream>
using namespace std;
class student
{
	private:
		int roll_no;
	public:
	    void get_data()
		{
		   cout<<"enter the roll number : ";
		   cin>>roll_no;	
		}
		void show_data()
		{
		     cout<<"\nROLL NUMBER : "<<roll_no;	
		}	
};
class marks : virtual public student
{
	private:
		int m[3];
	public:
	    void get_marks()
		{
		   get_data();
		   cout<<"\nenter the marks : ";
		   cin>>m[0]>>m[1]>>m[2];	
		}	
		void show_marks()
		{
			show_data();
			cout<<"\nTOTAL MARKS : "<<(m[0]+m[1]+m[2]);
		}
};
class activities : virtual public student
{
	private:
		int act[2];
	public:
	    void get_activitymark()
		{
		   cout<<"\nenter the activity marks : ";
	       cin>>act[0]>>act[1];	
		}
		void show_activitymark()
		{
		   cout<<"\nTotal Activity marks : "<<(act[0]+act[1]);	
		}	
};
class result:public marks,public activities
{
	public:
	    void get_result()
		{
			get_marks();
			get_activitymark();
		}
		void show_result()
		{
		    show_marks();
			show_activitymark();	
		}
};
main()
{
	result R;
	R.show_result();
}
