#include<iostream>
using namespace std;
class binary
{
	private:
		int *a;
		int n;
	public:
	    binary(int num)
		{
			n=num;
		    a=new int[num];
		}
		void read_data()
		{
			cout<<"enter the binary number : \n";
			for(int i=0;i<n;i++)
				cin>>a[i];
		}
		binary operator +(binary b)
		{
			binary temp(5);
			int carry[10]={0};
			for(int i=0;i<n;i++)
			{
				if(a[i]==0 && b.a[i]==0)
				   temp.a[i]=0;
				else if(a[i]==0 && b.a[i]==1)
				   temp.a[i]=1; 
				else if(a[i]==1 && b.a[i]==0)
				   temp.a[i]=1;  
				else if(a[i]==1 && b.a[i]==1)
				   {
				       temp.a[i]=0;            
			           carry[i+1]=1;
				   }
				temp.a[i]+=carry[i];
				if(temp.a[i]>=2)
				  {
				  	    temp.a[i]=0;            
			            carry[i+1]=1;
				  }
			}
			return temp;
		}
		void show_data()
		{
			cout<<"the resulting binary number is : \n";
			for(int i=0;i<n;i++)
			  cout<<a[i];
		}
};
main()
{
	binary b1(5);
	b1.read_data();
	binary b2(5);
	b2.read_data();
	binary b3(5);
	b3=b1+b2;
	b3.show_data();
	return 0;
}
