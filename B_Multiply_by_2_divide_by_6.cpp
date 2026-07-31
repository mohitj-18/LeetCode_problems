#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n;
    cin>>n;
    ll opp=0;
    while(n != 1){
        if(n%6 ==0){
            n = n/6;
            opp++;
        }
        else if(n%3 ==0){
            n = n*2;
            opp++;
        }
        else{
            cout<<-1<<"\n";
            return;
        }
    }
    cout<<opp<<"\n";
}

int main() {
    fast_io
    int t = 1;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}