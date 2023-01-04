#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define ll long long
 
int main() {
    string line;
    getline(cin, line);
    char flag;
    ll count = 0;
    flag = line[0];
    ll max = 0;
    for (char c: line){
        if (c==flag){
            count++;
        }
        else{
            flag = c;
            max = count > max ? count : max;
            count = 1;
        }
    }
    max = count > max ? count : max;
    cout << max;
}
