#include<iostream>
void read(int a[][100],int,int);
void display(int a[][100],int,int);
void multiply(int a[][100],int b[][100],int c[][100],int,int);
main()
{
	using namespace std;
	int a[100][100],b[100][100],c[100][100],row1,row2,col1,col2,res_row,res_col;
	cout<<"enter the number of rows and co;umns in first matrix";
	cin>>row1>>col1;
	read(a,row1,col1);
	cout<<"enter the number of rows and columns in second matrix";
	cin>>row2>>col2;
	read(b,row2,col2);
	if(row1!=col2)
	 exit(0);
	res_row=row1;
	res_col=col2;
	multiply(a,b,c,res_row,res_col);
	display(c,res_row,res_col);
	return 0; 
}
void read(int a[100][100],int row,int col)
{
	std::cout<<"enter the matrix";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		  std::cin>>a[i][j];
	}
}
void display(int a[100][100],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		std::cout<<"\n";		
		for(int j=0;j<col;j++)
		   std::cout<<a[i][j];
	}
}
void multiply(int a[100][100],int b[100][100],int c[100][100],int res_row,int res_col)
{
	for(int i=0;i<res_row;i++)
	{
		for(int j=0;j<res_col;j++)
		{
			c[i][j]=0;
			for(int k=0;k<res_col;k++)
			  c[i][j]+=a[i][k]*b[k][j];
		}
	}
}
