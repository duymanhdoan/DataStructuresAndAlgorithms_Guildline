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
    int n; cin >> n; 
    vector<ll> A(n); FOR(i,0,n) cin >> A[i]; 
    sort(A.begin(), A.end()); 
    ld sum1 = 0, sum2 = 0; 
    FOR(i,0,n) sum2 += A[i]; 
    ld ans = -1e18; 
    F0R ( i, n-1){
        sum2 -= A[i]; 
        sum1 += A[i]; 
        ans = max(ans, sum1 /(i+1) + sum2 / (n-i-1)); 
    }
    // cout <<;
    cout <<  setprecision(20)<< ans << nl; 
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);    
    // freopen("input.txt","r",stdin); 
    int T = 1;
    cin >> T;
    while(T--)
        solve();
	return 0;
}