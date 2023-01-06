#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ll n;
    cin >> n;
    ll sumn = 0;
    ll base;
    cin >> base;
    for (ll i=1; i<n; i++){
        ll x;
        cin >> x;
        if (x<base){
            sumn+=(base-x);
        }
        else{
            base=x;
        }
    }
    cout<<sumn;
}
