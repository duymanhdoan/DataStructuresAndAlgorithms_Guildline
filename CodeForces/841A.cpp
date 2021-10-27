#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define nl endl 


void solve() {
    int n,k; 
    string s; 
    cin >> n >> k; 
    cin >> s; 
    map<char,int> m;
    bool status = true;  
    FOR(i,0,s.size()) 
    {
        m[s[i]] ++; 
        if(m[s[i]] > k) status = false; 
    }
    string ans = status==true?"YES":"NO"; 
    cout << ans << nl; 
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);    
    solve();
	return 0;
}