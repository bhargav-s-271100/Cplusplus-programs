#include<iostream>
using namespace std;
class number
{
	private:
		 int num;
	public:
		friend istream& operator >> (istream &nput ,number &n)
		{
		    cin>>n.num;	
		}
	    friend	ostream& operator << (ostream &output,number &n)
		{
			cout<<"the number is : "<<n.num;
		}
};
main()
{
	number n;
	cin>>n;
	cout<<n;
}
