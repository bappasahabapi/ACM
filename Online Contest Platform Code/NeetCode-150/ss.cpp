#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

typedef long long ll;

vector<ll> cpSum(const vector<ll>& A) {
    int N = A.size();
    vector<ll> prefixSum(N + 1, 0);
    for (int i = 0; i < N; i++) {
        prefixSum[i + 1] = prefixSum[i] + A[i];
    }
    return prefixSum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, Q;
    cin >> N >> Q;
    
    vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<ll> prefixSum = cpSum(A);
    unordered_map<ll, ll> countWays;

    for (int start = 0; start < N; start++) {
        for (int end = start + 1; end <= N; end++) {
            ll sum = prefixSum[end] - prefixSum[start];
            countWays[sum]++;
        }
    }

    while (Q--) {
        ll q;
        cin >> q;
        cout << countWays[q] << '\n';
    }

    return 0;
}
