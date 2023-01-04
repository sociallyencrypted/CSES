#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ll n;
    cin >> n;
    ll sumn = 0;
    for (ll i=1; i<n; i++){
        ll x;
        cin >> x;
        sumn+=i;
        sumn-=x;
    }
    sumn+=n;
    cout<<sumn;
}
