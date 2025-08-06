// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter array size: "<<"\n";
	cin>>n;
	int arr[n];
	
	int sum =0;
	for (int i = 0; i < n; i++)
		cin>>arr[i];
	
	for (int i = 0; i < n; i++)
		sum=sum+arr[i];
	
	cout<<"sum is: "<<sum<<endl;
	
	int mul =1;
	for (int i = 0; i < n; ++i)
		mul=mul*arr[i];
	cout<<"Multiplication is: "<<mul<<endl;
	
	
	
	
	return 0;
}