#include<iostream>
main()
{
	using namespace std;
	int i=0,j,k,l=0,index=0,copy=0;
	char s[100],a[20],b[20],c[200];
	cout<<"enter the main string";
	gets(s);
	cout<<"enter the pattern to be replaced";
	gets(a);
	cout<<"enter the replacing pattern";
	gets(b);
	while(s[i]!='\0')
	{
		j=0,k=i;
		if(s[k]==a[j] && a[j]!='\0')
		  {
		 	j++;
			 k++;
		  }
		if(a[j]=='\0')
		  {
		    copy=k;
			while(b[l]!='\0')
			{
			 c[index]=b[l];
			 index++;
			 l++;	
	        }
		  }
		c[index]=s[copy];
		index++;
		copy++;
		i++;  
	}
	cout<<"the new string is :"<<"\n";
	puts(c);
	return 0;
}
