#include <iostream>

using namespace std; 

int main() 
	
	{
		int rev=0,n,temp,d; 
		
		cout<<"Enter a number :"<<endl; 
		cin>>n; 

		temp = n; 

		while(n>0)
		{
			d = n % 10 ; 
			rev = rev*10 + d; 
			n = n/10; 
		}

		cout<<"the reverse is "<<rev<<endl;

		if(rev == temp)
		{
			cout<<"the number is palindrome"<<endl; 
		}

		else 
		{
			cout<<"number is not palindrome"<<endl; 
		}

		return 0; 
	}