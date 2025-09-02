
 //আমার কাছে কতগুলো কয়েন আছে , সেইগুলো ব্যবহার করে আমাকে ১০ টাকা বা কিছু একটা বনাতে হবে ।
 // মিনিমার কতগুলো করেন ব্যবহার করে এইটা বানানো  সম্ভব;

 // coin: 1$ ,3$, $4, --> we have to make 10$ by using these coin
 // 10= 4+4+1+1, 10=3+3+1, 10=4+3+3


#include<bits/stdc++.h>
using namespace std;

vector<int>coins ={1,3,4};

// this function return min how many coins needed to make n.
int coin_change(int n)
{
    if(n==0)
        return 0;

    // minimum coin onnek boro dhore nilam
    int ans =100000000;
   // int ans =1;
    for(int i=0;i<coins.size();i++)
    {
        if(n>=coins[i])
        {
                // this min()--> return the minimum of (ans , coin_change() )
            ans =min(ans,1+coin_change(n-coins[i]));
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<"minimum needed coin to make "<<n<<" is:"<<coin_change(n)<<endl;

    return 0;
}










