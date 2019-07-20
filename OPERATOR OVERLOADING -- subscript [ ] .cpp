#include<iostream>
using namespace std;
class array
{
	private:
		int *arr;
		int n;
	public:
	    array(int num)
		{
			n=num;
			arr=new int[num];
	    }
	    	void read_data()
		{
			cout<<"enter the array : \n";
			for(int i=0;i<5;i++)
			  cin>>arr[i];
		}
		void show_data()
		{
			cout<<"the array is : \n";
			for(int i=0;i<5;i++)
			   cout<<arr[i]<<" ";
		}
		int& operator [] (int i)
		{
			if(i>=0 && i<n)
			  return arr[i];
		}
};
main()
{
	array a(5);
	a.read_data();
	a.show_data();
	cout<<"\n the second element negated is : "<<- a[1];
}
