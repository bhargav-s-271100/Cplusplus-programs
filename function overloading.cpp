#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
		int roll_no;
		char name[20];
    public:
	    void set_data();
		void set_data(int r);
		void set_data(int r,char *n);
		void display();		
};
void student ::  set_data()
{
	cout<<"enter the name : ";
	gets(name);
	cout<<"\n enter the roll number : ";
	cin>>roll_no;
}
void student ::  set_data(int r)
{
	roll_no=r;
	cout<<"\n enter the name : ";
	gets(name);
}
void student ::  set_data(int r,char*n)
{
	strcpy(name,n);
	roll_no=r;
}
void student :: display()
{
	cout<<"\n NAME : "<<name;
	cout<<"\n ROLL NUMBER : "<<roll_no;
}
main()
{
	student s;
	s.set_data(21);
	s.display();
	return 0;
}
