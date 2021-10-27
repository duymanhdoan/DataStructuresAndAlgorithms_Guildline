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

vector <pair <string, int> > v; 

void solve()
{
    int n,m; 
    cin >> n >> m; 
    FOR(i,1,n+1) 
    {
        string s; cin >> s; 
        for(int j = 1; j < m; j +=2 )
        {
            s[j] = 'Z' - (s[j] - 'A'); 
        }
        v.push_back(make_pair(s,i)); 
    }
    sort(v.begin(),v.end()); 
    F0R(i,v.size())
        cout << v[i].second << " "; 
}

int main()
{
        example(); 
    return 0; 
}