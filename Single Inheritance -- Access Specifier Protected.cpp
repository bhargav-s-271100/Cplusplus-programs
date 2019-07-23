#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private: 
	   int roll_no;
	protected:
	   char course[20];
	public:
	    void get_data()
		{
		   cout<<"enter the roll_no : ";
		   cin>>roll_no;	
		}
		void show_data()
		{
		   cout<<"\nroll number of the student : "<<roll_no;	
		}      
};
class result : protected student
{
	private:
		int marks[3];
	public:
	    void get_result()
		{
		   cout<<"enter the marks : \n";
		   for(int i=0;i<3;i++)
		     cin>>marks[i];
		   cout<<"\nenter the course of the student : ";
	       cin>>course;
			 	
		}
		void show_result()
		{
		   cout<<"\nCourse : "<<course;
		   show_data();
		   int total;
		   for(int i=0;i<3;i++)
		      total+=marks[i];
		   cout<<"\ntotal marks of the student is : "<<total;	
		}	
};
main()
{
	student s;
	s.get_data();
	result R;
	R.get_result();
	R.show_result();
}
