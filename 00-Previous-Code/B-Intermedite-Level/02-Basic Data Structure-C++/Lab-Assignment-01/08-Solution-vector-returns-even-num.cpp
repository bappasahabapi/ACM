/* T
 Write a C++ program that returns the elements in a vector that
    are even numbered.
    1)Take 5 elements into a vector.
    2)Define a function named even_generator(), which receives a vector
    and returns a vector that only contains even numbers.
    
    Note: You don't need to take input from the user. 
    
*/

#include<bits/stdc++.h>
using namespace std;


vector<int>even_generator(vector<int>v)
{
    vector<int>ans_vector;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2==0)
        {
            ans_vector.push_back(v[i]);
        }
    }
    return ans_vector;
}

int main()
{
    vector<int> given_vector = {13, 22, 33, 44, 55};
    // vector<int> given_vector;
    // given_vector.push_back(13);
    // given_vector.push_back(22);
    // given_vector.push_back(33);
    // given_vector.push_back(44);
    // given_vector.push_back(55);

    vector<int> result = even_generator(given_vector);
    cout << "Even Numbers in the Vector: ";
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;

}


