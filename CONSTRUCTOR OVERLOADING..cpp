#include<iostream>
using namespace std;
class array
{
	private:
		int n;
		int *a;
	public:
		array()
		{
			int n=0;
		}
		array(int num);
        void data();
};
array::array(int num)	
	{
			n=num;
			a= new int[20];
			cout<<"enter the array : \n";
			for(int i=0;i<num;i++)
			   cin>>a[i];
		}
void array::data()       
	   {
			int even=0,odd=0;
			for(int i=0;i<n;i++)
			{
			    if(a[i]%2==0)
				  even++;
				else
				  odd++;
		    }
		    cout<<"number of even elements = "<<even;
			cout<<"\n number of odd elements = "<<odd;    
		}
main()
{
	array s(5);
	s.data();
	return 0;
}
