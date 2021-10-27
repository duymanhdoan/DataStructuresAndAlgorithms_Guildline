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
    int T, n;
    cin >> T;
    while(T--){
        cin >> n; 
        cout << 2 << nl; 
        int se = n, fi = n -1; 
        for(int i=n; i>1; --i)
        {
            cout << se << " " << fi << nl; 
            se = (se + fi + 1)/2;  
            fi --;  
        }
    }

}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);    
    solve();
	return 0;
}