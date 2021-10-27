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

int calc(ll x)
{
    int s = 0; 
    while(x > 0)
    {
        s += x%10; 
        x /= 10; 
    }
    return s; 
}

void solve()
{
    ll n; cin >> n; 
    for(ll x =  max((ll)0,(ll)sqrt(n) - 100); x <= (ll)sqrt(n) + 1; x++)
    {
        if (x* (x + calc(x)) == n) 
        {
            cout << x << endl; 
            return; 
        }
    }
    cout<<-1 << endl;  
}

int main()
{
    solve(); 
    return 0; 
}
