#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;



// to making sort decending order

	bool myfunc(int a , int b){
		return (a>b); // decending order
	}


 int main(){ 

	

	
	vector<int>vec;
	vector<int>::iterator it;


	vec.push_back(100);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(140);
	vec.push_back(50);


	// Printing the vectors

	cout<<"Before Sorting:\t";
	for(it=vec.begin(); it !=vec.end();it++){

		cout<<*it<<"\t";
 
	}
	puts("");


	cout<<"After Sorting:\t";

	// sort(vec.begin(),vec.end());
	// sort(vec.begin(),vec.end(),myfunc);
	sort(vec.begin(),vec.begin() +3);


	for(it=vec.begin(); it !=vec.end();it++){

		cout<<*it<<"\t";
 
	}
	

	
	



	




	return 0;
}