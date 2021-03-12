#include <iostream>

using namespace std; 

int main() 
	
	{
		int i,num; 

		cout<<"enter a number "<<endl; 
		cin>>num; 

		for(i = 1;i <= 10; i = i + 1 )
		{
			cout<<num<<" x " << i << " = "<<num * i <<endl; 
		}
	}