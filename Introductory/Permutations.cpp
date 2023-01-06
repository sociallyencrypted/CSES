#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ll n;
    cin >> n;
    if (n==1){
        cout << 1;
        return 0;
    }
    if (n<4){
        cout << "NO SOLUTION"; return 0;
    }
    for (ll i=1; i<=n; i++){
        if (i%2==0){
            cout << i << " ";
        }
    }
    for (ll i=1; i<=n; i++){
        if (i%2==1){
            cout << i << " ";
        }
    }
}
