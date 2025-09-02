#include <iostream>
#include <vector>
using namespace std;
 int main()
{
	
	cout<<"vector"<<endl;


	// defining vector
	// vector data_type var_name

	// vector is working like an array
	vector<int> vec;


	vec.push_back(12);
	cout<<vec[0]<<endl;

	vec.push_back(122);
	cout<<vec[1]<<endl;

	vec.push_back(124);
	// cout<<vec[2]<<endl;

	vec[2]=434;
	cout<<vec[2]<<endl;
	

	// cout<<vec;

	
	




	return 0;
}