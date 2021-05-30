#include<iostream>
#include<fstream>
#include<string>

using namespace std; 



int main()
	{
		string f_name; 
		cin>>f_name;
		ofstream file; 
		file.open(f_name);
		file<<"#include<bits/stdc++.h> \n\nusing namespace std; \n\nint main() \n\t{\n\n\t\treturn 0;\n\t}"; 
		file.close();  
		return 0; 
	} 