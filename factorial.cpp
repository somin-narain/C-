#include <iostream>

using namespace std;

int main() 
	{
		int n,i; 
		long double f;

		cout<<"enter a positive value:"<<endl;
		cin>>n; 
		f = 1; 

		if(n < 0)
		{
			cout<<"invalid"<<endl; 
		}

		else
		{
			
				for(i = 1;i<=n;i = i+1)
				{
					f = f *i; 
					cout<<f<<endl; 
				}
		
		}
		cout<<"the final value is "<<f<<endl; 
		return 0; 
	}