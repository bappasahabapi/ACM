#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
 int main()
{
	
	

	
	vector<int>vec;
	vector<int>::iterator it;


	// vector<int>vec2;
	// vector<int>::iterator it;


	// vector<double>vec1;
	// vector<double>::iterator it1;
	// it1 = vec2.begin();


	// vector<char>vec3;
	// vector<char>::iterator it3;
	// it3=vec2.begin();






	for(int i =1; i<=5 ;i++){
		vec.push_back(i);
	}

	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<"\t";
	}
	puts("");

	for(it=vec.begin(); it !=vec.end();it++){

		cout<<*it<<endl;
 
	}

	
	



	




	return 0;
}