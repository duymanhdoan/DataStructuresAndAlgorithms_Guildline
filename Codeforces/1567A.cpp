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


char pred(char x)
{
    map <char, char> m; 
    m['L'] = 'R'; 
    m['R'] = 'L'; 
    m['U'] = 'D'; 
    m['D'] = 'U'; 
    return m[x]; 
}

void solve()
{
    string s, ans = ""; 
    int n, len = 0; 
    cin >> n; 
    cin >> s; 
    if(n == 1) 
        ans = pred(s[0]); 
    else 
    {
        if(pred(s[0]) == s[1]) ans += s[0]; 
        else ans += pred(s[0]); 
        FOR(i,1,n)
            if(pred(s[i]) == s[i-1])
            {
                ans += s[i];
                ans[i-1] = s[i-1]; 
            } 
            else 
                ans += pred(s[i]);  

    }
    cout << ans << nl; 
}


int main()
{
    int T; cin >> T; 
    while(T--)
        solve(); 
    return 0; 
}