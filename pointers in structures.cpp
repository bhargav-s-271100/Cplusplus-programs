#include<iostream>
struct student
{
	char name[20];
	int roll_no;
};
main()
{
	using namespace std;
	struct student *s[2],s1,s2;
	s[0]=&s1,s[1]=&s2;
	cout<<"enter the details of the students:\n";
	for(int i=0;i<2;i++)
	{
		cout<<"\n enter name of "<<i+1<<"th student";
		cin>>(s[i]->name);
		cout<<"enter roll number of "<<i+1<<"th student";
		cin>>s[i]->roll_no;
	}
	cout<<"the details of the students are:\n";
	for(int i=0;i<2;i++)
	{
		cout<<"\n("<<i+1<<")NAME :";
		puts(s[i]->name);
		cout<<"\n("<<i+1<<")roll number :"<<s[i]->roll_no;
	}
	return 0;
}
