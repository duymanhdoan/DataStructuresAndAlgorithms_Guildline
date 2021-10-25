#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
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
const int inf = INT_MAX; //check the limits, dummy 


int main()
{
    int T; cin >> T; 
    while(T--)
    {
        int n, ans = inf; cin >> n; 
        for(int x = 1; x*x <= n; ++x)
        {
            ans = min(ans, x - 1 + (n-1)/x); 
        }
        cout << ans << endl; 
    }
    return 0; 
}