#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<fixed<<setprecision(1);
    for (int i=1; i<=10; i++)
      {

          cout <<i<<" x "<<n<<" = "<<i*n<<endl;

      }

}
