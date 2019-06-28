#include<iostream>
struct student
	{
		union 
		{
			char name[20];
			int roll_no;
		};
		int usn;
	};
main()
{
	using namespace std;
	struct student s1;
	char choice;
	cout<<"enter choice y or Y if name is to be inputted : ";
	cin>>choice;
	if(choice=='y' || choice=='Y')
    {
	  cout<<"\n enter the name : ";
	  cin>>s1.name;
    }
	else
	{
	  cout<<"\n enter the roll number : ";
	  cin>>s1.roll_no;
    }
	cout<<"\n enter the usn : ";
   	cin>>s1.usn;
	if(choice=='y' || choice=='Y')
	   cout<<"\n student name = "<<s1.name;
	else
	   cout<<"\n roll number = "<<s1.roll_no;
	cout<<"\n USN = "<<s1.usn;
	return 0;
}	
