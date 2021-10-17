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


ll bsx(ll left, ll right, ll L, int k)
{
    while(left < right)
    {
        ll mid = left + (right - left)/2; 
        long long z = 1; 
        for(int i=0; i<k; i++)
        {
            z *= mid; 
            if(z >= L) break; 
        }
        if(z >= L) 
            right = mid; 
        else 
            left = mid + 1;  
    }
    return left;    
}

void solve(int cnt)
{
    ll L,R; 
    cin >> L >> R; 
    
    for(int k=40;  k >= 1; k -- )
    {
        long left  = 0, right = pow(R, 1.0/k ) + 10; 
        
        ll x = bsx(left, right, L, k); 

        ll z = 1; 
        for(int i=0; i<k; i++)
        {    
            z*=x;
            if(z > R) break;  
        }

        if( L<= z && z <= R)
        {
            printf("Case #%d: %d\n",cnt,k); 
            break; 
        }

    }
    


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T; // 5000 -> 5*1-^3 
    cin >> T;
    F0R(i,T) 
    {
        solve(i+1); 
    }
    return 0; 
}