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
			for(int i=0;i<n;i++)
			    cin>>a[i];
		}
		int interpolation_search(int val)
		{
		    	int mid,low=0,high=n;
		    	while(low<=high)
				{
				   mid=low+(high-low)*((val-a[low])/(a[high]-a[low]));
		    	   if(a[mid]==val)
		    	       return mid;
		    	    else if(a[mid]<val)
				       low=mid+1;
				    else
				       high=mid-1;
			    }
			return 0;		 	   
		}	
};
main()
{
	array a(10);
	cout<<"enter the elements of the array : \n";
	a.get_data();
	int num;
	cout<<"\n enter the number to be seached for : ";
	cin>>num;
	int c=a.interpolation_search(num);
	if(c!=0)
	  cout<<"\n element is found at position : "<<c;
	else
	  cout<<"\n element not found ";
	return 0;
}
