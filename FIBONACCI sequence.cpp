#include<iostream>
int fib(int);
main()
{
	using namespace std;
	int n;
	cout<<"enter the number of the term to be found:";
	cin>>n;
	cout<<fib(n);
	return 0;
}
int fib(int n)
{
	if(n<=2)
	  return 1;
	else 
	  return(fib(n-1)+fib(n-2));  
}
