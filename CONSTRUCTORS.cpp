#include<iostream>
using namespace std;
class student
{
	private:
		int n;
	public:
	    student()
		{
			int n=10;
		}
		student(int r)
		{
			int n=r;
		}
		void show_data()
		{
			cout<<n<<"\n";
		}	
};
main()
{
	student s1;
	s1.show_data();
	int n;
	cout<<"enter the value : ";
	cin>>n;
	student s2(n);
	s2.show_data();
	return 0;
}
