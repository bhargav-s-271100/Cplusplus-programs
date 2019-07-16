#include<iostream>
using namespace std;
class array
{
	private:
		int *a;
		int n;
	public:
	    array(int num)
		{
			n=num;
			a=new int[num];
		}
		void get_data()
		{
			cout<<"enter the elements of the array : \n";
			for(int i=0;i<n;i++)
			   cin>>a[i];
		}
		int smallest(int k)
		{
		     int small=a[k],smallpos=k;
			 for(int i=k+1;i<n;i++)
			   {
				   if(a[i]<small)
			   	     {
						small=a[i];
						smallpos=i;
				     }
				}
			  return smallpos;		
		}
		void selection_sort()
		{
			int temp,pos=a[0];
			for(int i=0;i<n;i++)
			{
			     pos=smallest(i);
			       temp=a[i];
			       a[i]=a[pos];
			       a[pos]=temp;
			}
			cout<<"the sorted array is : \n";
			for(int i=0;i<n;i++)
			  cout<<a[i]<<" ";
		}	
};
main()
{
	array s(10);
	s.get_data();
	s.selection_sort();
	return 0;
}
