#include<iostream>
#include<string.h>
using namespace std;
class String
{
	private:
	  char *str;
	public:
	  String(char *s)
	  {
	      str=new char[20];
		  strcpy(str,s);	
	  } 
	  void show_data()
	  {
	  	cout<<"the string is : "<<str;
	  }
	  operator char()
	  {
	  	char c=str[0];
	  	return c;
	  }
};
main()
{
	char s[20];
	cout<<"enter the string : ";
	gets(s);
	String a(s);
	a.show_data();
	char c();
	cout<<"the string's first letter is : "<<c;
}
