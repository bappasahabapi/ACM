#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
 int main()
{
	
	cout<<"vector-printing\n"<<endl;

	// ---------- 1st way----------- 

	// vector<int >v;
	
	// v.push_back(10);
	// v.push_back(20);
	// v.push_back(40);
	// v.push_back(50);
	// v.push_back(60);


	// cout<<"Vector size is:"<<v.size()<<endl;

	// for (int i = 0; i < v.size(); i++)
	// {
	// 	cout<<v[i]<<endl;
	// }


	// ---------- 2nd  way----------- 


	vector<int>v1(4,0);
	v1.push_back(11);

	for (int i = 0; i < v1.size(); i++)
	{
		// cout<<v1[i]<<endl;
	}


// ---------- 3rd  way-----------
// using iterator 

	vector<int>vec2;
	vector<int>::iterator it;

	for(int i =0; i<5 ;i++){
		vec2.push_back(i);
	}

	for(int i=0;i<vec2.size();i++){
		cout<<vec2[i]<<"\t";
	}
	puts("");

	it =vec2.begin();
	it++;
	cout<<*it<<endl;



	
	




	return 0;
}