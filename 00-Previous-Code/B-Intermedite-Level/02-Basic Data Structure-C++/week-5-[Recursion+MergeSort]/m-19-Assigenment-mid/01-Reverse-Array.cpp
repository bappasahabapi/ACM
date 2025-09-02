#include<bits/stdc++.h>

using namespace std;

vector<int> reverse_array(vector<int> ans)
{
    int n = ans.size();
    for(int i = 0; i < n / 2; i++)
    {
        int temp = ans[i];
        ans[i] = ans[n - i - 1];
        ans[n - i - 1] = temp;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> reversed_a = reverse_array(a);

    for(int i = 0; i < n; i++)
        cout << reversed_a[i] << " ";

    return 0;
}
