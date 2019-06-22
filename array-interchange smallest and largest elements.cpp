#include<iostream>
int smallest(int*,int);
int largest(int*,int);
void interchange(int*,int*);
main()
{
	using namespace std;
	int i,a[100],n;
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter the elemets of the array";
	for(i=0;i<n;i++)
	   cin>>a[i];
	int smallpos=smallest(a,n);
	int largepos=largest(a,n);
	interchange(&smallpos,&largepos);
	cout<<"\nthe smallest element intercganged with largest element is"<<a[smallpos];
	cout<<"\n the largest element intercganged with smallest element is"<<a[largepos];
	return 0;
}

int smallest(int a[100],int n)
 {
    int small=a[0],smallpos=0;
 	for(int i=0;i<n;i++)
 	{
 		if(a[i]<small)
 		{
		   small=a[i];
 	       smallpos=i;
		 }
	 }
    return smallpos;
 }
 int largest(int a[100],int n)
 {
 	 int large=a[0],largepos=0;
	 for(int i=0;i<n;i++)
 	{
 		if(a[i]>large)
 		{
		   large=a[i];
 	       largepos=i;
		 }
	 }
    return largepos;
 }
 void interchange(int* s,int*l)
 {
 	int temp=*s;
 	*s=*l;
 	*l=temp;
 }
