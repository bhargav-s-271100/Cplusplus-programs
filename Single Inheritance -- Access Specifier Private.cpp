#include<iostream>
using namespace std;
class doctor
{
    private:
	    int sl_no;
	    char medicene[20];
	public:
	    void get_data()
		{
		    cout<<"\nenter the serial number : ";
			cin>>sl_no;
			cout<<"\nenter the medicene name : ";
			cin>>medicene;
		}
		void show_data()
		{
			cout<<"\nSerial Number : "<<sl_no;
			cout<<"\nMedicene Name : "<<medicene;
		}    
};
class prescription : private doctor
{
    private:
	    char name[20];
	public:
	    void get_result()
		{
		    cout<<"\nenter the name : ";
			cin>>name;
			get_data();	
		}		
		void show_result()
		{
			cout<<"\nName : "<<name;
			show_data();
		}
};
main()
{
	prescription P;
	P.get_result();
	P.show_result();
}
