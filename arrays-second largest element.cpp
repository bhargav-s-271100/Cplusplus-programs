#include<iostream>
main()
{
	using namespace std;
	int i,a[100],n;
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter the array";
	for(i=0;i<n;i++)
	   cin>>a[i];
	int large=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>large)
		 large=a[i];
	}
	int second_large=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]!=large && a[i]>second_large)
		 second_large=a[i];
	}
	cout<<"the largest element is"<<large;
	cout<<"\n the second largest element is"<<second_large;
	return 0;
}
