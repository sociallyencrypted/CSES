#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;

    ll coins[n];
    ll dp[x+1] = {0};

    for (ll i = 0; i < n; i++){
        cin >> coins[i];
    }

    dp[0] = 1;

    for(auto coin: coins){
        for (int i = 0; i <= x; i++){
            if (i-coin >= 0) {
                dp[i] += dp[i-coin];
                dp[i] %= MOD;
            }
        }
    }
    
    cout << dp[x] << endl;
}