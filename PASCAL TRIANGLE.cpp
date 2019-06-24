#include<iostream>
main()
{
	using namespace std;
	int a[10][10]={0},i,j;
	a[0][0]=a[1][0]=a[1][1]=1;
	for(i=2;i<=7;i++)
     {
     	 a[i][0]=1;
		 for(j=1;j<=i;j++)
     	  a[i][j]=a[i-1][j-1]+a[i-1][j];
	 }
	for(i=0;i<=7;i++)
	{
		cout<<"\n";
		for(j=0;j<i;j++)
		   cout<<a[i][j];
	 } 
}
