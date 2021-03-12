#include <iostream>

using namespace std; 

int main() 	
	{
		int i; 
		int n; 


		cout<<"Enter the value of n "<<endl; 
		cin>>n; 

		for(i=1;i<n+1;i = i+1)
		{
			if(i % 15 == 0)
			{
				cout<<"FizzBuzz"<<endl; 
			}
			else if(i % 3 == 0)
			{
				cout<<"Fizz"<<endl; 
			}

			else if(i % 5 == 0)
			{
				cout<<"Buzz"<<endl; 
			}

			else 
			{
			cout<<i<<endl; 
			}
		}  
		return 0; 
	}