#include <iostream>

using namespace std; 

int main() 
	{
		int n,d,r,t; 

		cout<<"Enter a number: "<<endl; 
		cin>>n;

		t = n;  
		r = 0; 

		while(n > 0)
		{
			d = n % 10; 
			r = r + d  * d * d;
			n = n / 10; 

		}

		if(r == t)
		{
			cout<<"number is armstrong "<<endl;
		}

		else
			{
				cout<<"not an armstrong number "<<endl; 
			}
		return 0; 
	}