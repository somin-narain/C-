#include <iostream>

using namespace std;

int main() 
	{
		int num,i,f; 

		cout<<"Enter a number "<<endl; 
		cin>>num; 

		f = 0; 

		for(i = 2;i<num/2;i++)
		{
			if(num % i == 0)
			{
				f = 1; 
				break;
			}

			
		}

		if(f == 1)
		{
			cout<<"number is not prime"<<endl; 
		}

		else
		{
			cout<<"number is prime "<<endl; 
		}
		return 0; 
	} 