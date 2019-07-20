#include<iostream>
using namespace std;
class array
{
	private:
		int *arr;
	public:
	    void* operator new(size_t size)
		{
		    void* parr = :: new int[size];
			if(parr==NULL)
			{
				cout<<"memory not allocated";
				exit(1);
			}
			else
			return parr;	
     	}
		void operator delete(void *parr)
		{
			:: delete parr;
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
};
main()
{
    array *a=new array;
	a->read_data();
	a->show_data();
	delete a;
}
