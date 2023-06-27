#include <iostream>
using namespace std;

typedef long long ll;

ll MOD = 1e9 + 7;

ll remainingCombinations(ll left, ll* dp){
    if (left == 0) return 1;
    if (dp[left] != 0) return dp[left];
    for (ll i = 1; i <= 6; i++){
        if (left - i >= 0){
            dp[left] += remainingCombinations(left - i, dp);
            dp[left] %= MOD;
        }
    }
    return dp[left];
}

int main(){
    ll n;
    cin >> n;
    ll dp[n+1] = {0};
    cout << remainingCombinations(n, dp) << endl;
}