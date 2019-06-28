#include<iostream>
#include<stdlib.h>
enum COLOR {violet,indigo,blue,green,yellow,orange,red};
main()
{
	using namespace std;
	enum COLOR c;
	switch(c)
	{
		case violet:
		cout<<"violet";
		break;
		case indigo:
		cout<<"indigo";
		break;
		case blue:
		cout<<"blue";
		break;
		case green:
		cout<<"green";
		break;
		case yellow:
		cout<<"yellow";
		break;
		case orange:
		cout<<"orange";
		break;
		case red:
		cout<<"red";
		break;
	}
	return 0;
}
