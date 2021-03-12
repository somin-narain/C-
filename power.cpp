#include <iostream>

using namespace std; 

int main() 	
	{
		int x,b,i,j; 

		cout<<"enter the value of base: "<<endl; 
		cout<<"enter the value of power: "<<endl; 

		cin>>b; 
		cin>>x; 

		j = 1; 
		

		for(i = 1; i < x + 1;i = i +1)
		{
			j = (j * b); 
			
			
		}
		cout<<"the final value is :"<<j<<endl;

			
		return 0; 
	}