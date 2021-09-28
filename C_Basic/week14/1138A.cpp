#include <bits/stdc++.h> 
using namespace std; 

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001; //check the limits, dummy
int n; 
vector <int> a, b; 

void solve()
{
    cin >> n; 
    F0R(i,n) 
    {
        int x; cin >> x; a.push_back(x); 
    } 
    int cnt = 1; 
    FOR(i,1,a.size()) 
    { 
        if(a[i] == a[i-1]) 
            cnt ++; 
        else 
            b.push_back(cnt), cnt = 1; 
        if(i==a.size()-1) b.push_back(cnt); 
    }
    int ans = 0; 
    FOR(i,1,b.size()) 
    {
        int tmp = min(b[i-1],b[i]); 
        ans = max(ans, tmp); 
    }
    cout << 2*ans << nl;
}

int main()
{
    solve(); 
    return 0; 
}