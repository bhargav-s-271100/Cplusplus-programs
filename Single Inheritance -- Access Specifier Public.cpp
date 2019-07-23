#include<iostream>
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
		   cout<<"roll number of the student : "<<roll_no;	
		}      
};
class result : public student
{
	private:
		char* name;
	public:
	    void get_result()
		{
		   	cout<<"enter the name of the student : ";
	        cin>>name;
	        cout<<"enter the course of the student : ";
	        cin>>course;
		}
		void show_result()
		{
		   cout<<"Student Name : "<<name;
		   cout<<"Course : "<<course;
		   show_data();	
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
