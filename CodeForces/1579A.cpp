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
const int MX = 100001; //check the limits, dummy 

bool  P(int a, int b, int c, int s)
{
    return (a + c == b && s%2 == 0);  
}

void solve()
{
    map <char, int> cnt; 
    string s; cin >> s; 
    FOR(i,0,s.size()) cnt[s[i]]++; 
    int v_a = cnt['A']; 
    int v_b = cnt['B']; 
    int v_c = cnt['C']; 
    if(P(v_a,v_b,v_c,s.size())) 
        cout << "YES" << nl; 
    else 
        cout << "NO" << nl; 

}


int main()
{
    int t; 
    cin >> t; 
    while(t--)
    {
        solve(); 
    }
    return 0; 
}