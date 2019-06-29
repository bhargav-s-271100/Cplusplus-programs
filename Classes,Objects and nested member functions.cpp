#include<iostream>
using namespace std;
class student
{
	private:
	   char name[20];
	   int roll_no;
	   int marks[3];
	   int total();
	public:
		void read();
		void display();
	
};
void student :: read()
{
	cout<<"\n enter the name of the student";
	gets(name);
	cout<<"enter the roll number of the student";
	cin>>roll_no;
	cout<<"enter the marks";
	for(int i=0;i<3;i++)
	   cin>>marks[i];
	
}
void student :: display()
{
	cout<<"STUDENT DETAILS :";
	cout<<"\n NAME : "<<name;
	cout<<"\n ROLL NO : "<<roll_no;
	int t=total();
	cout<<"\n TOTAL MARKS : "<<t;
}
int student :: total()
{
	int sum=0;
	for(int i=0;i<3;i++)
	   sum+=marks[i];
	return sum;
}
main()
{
	student s;
	s.read();
	s.display();
	return 0;
}
