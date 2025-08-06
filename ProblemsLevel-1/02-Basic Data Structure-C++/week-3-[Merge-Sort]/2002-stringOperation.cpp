// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
 { 
	// input output of string
	string s ;
	// cin>>s;
	getline(cin,s);
	cout<<s<<endl;
	
	s.erase(s.begin());
	s.pop_back();
	cout<<s<<endl;


	
	
	
	// cout<<"hellow";
	string s1 ="My name is bappa saha. ";
	string s2 = "I live in Bangladesh.";
	
	string s3 =s1+s2;
	cout<<s3<<endl;
	
	// Accessing character in string 
	cout<<"first index is:"<<s1[0]<<endl;
	cout<<s1[1]<<endl;
	cout<<s1[2]<<endl;
	cout<<s1[3]<<endl;
	
	// different types of operation in string 
	cout << "string size of s1: "<<s1.size()<<endl;
	
	// Shifting string 
	 // a--> b;
	 // B--> C;
	 // M--> N;
	for(int i=0;i<s1.size(); i++)
		s1[i]=s1[i]+1; // 'M'+1 = 'N'
	cout<<s1<<endl<<"\n";
	
	// delete last character of a string 
	string s4 ="Elemenate last element of a string.";
	cout<<s4<<endl;
	s4.pop_back();
	cout<<s4<<endl;
	
	string s5 ="Elemenate string.";
	s5.erase(s5.begin()+ 0);
	cout<<s5<<endl;
	
	
	
	
	
	return 0;
}