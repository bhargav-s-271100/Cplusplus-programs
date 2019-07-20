#include<iostream>
using namespace std;
class matrix
{
	private:
		int a[5][5];
	public:
		matrix(int m,int n)
		{
		    cout<<"enter the elements of the matrix : \n ";
			for(int i=0;i<m;i++)
			{
				cout<<"\n";
				for(int j=0;j<n;j++)
				   cin>>a[i][j];
			}
		}
		void show_data()
		{
			cout<<"the marix is : \n";
			for(int i=0;i<3;i++)
			{
				cout<<"\n";
				for(int j=0;j<3;j++)
				   cout<<a[i][j]<<" ";
			}
		}
		int& operator () (int i,int j)
		{
			if((i>=0 && i<3)&&(j>=0 && j<3))
			  return a[i][j];
		}
};
main()
{
	matrix M(3,3);
	M.show_data();
	cout<<"\nthe matrix multiplied by two is : \n";
	for(int i=0;i<3;i++)
			{
				cout<<"\n";
				for(int j=0;j<3;j++)
				   cout<<M(i,j)*2<<" ";
			}
}
