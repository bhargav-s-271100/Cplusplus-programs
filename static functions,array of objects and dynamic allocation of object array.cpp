#include<iostream>
using namespace std;
class student
{
	private:   
	   static int id;
	   int roll_no;
	   char name[20];
	public:
	   static int set()
	   {
         return id++;       
       }
	   void read();
	   void display();   
};
int student :: id =0;
void student :: read()
{
	cout<<"enter the name : \n ";
	for(int i=0;i<=5;i++)
	  cin>>name;
	roll_no=student :: set();
}
void student :: display()
{
	cout<<name<<"\t"<<roll_no<<"\n";
}
main()
{
	student *s[5];
	for(int i=0;i<=5;i++)
		s[i]->read();
	cout<<"NAME"<<"\t"<<"ROLL NUMBER"<<"\n";	
	for(int i=0;i<=5;i++)	
		s[i]->display();
	return 0;
}
