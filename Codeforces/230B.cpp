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

const int maxn = 10e6 + 10; 

vector <int> prime; 
bool isPrime[maxn+1]; 
void sieve(int N){
    for(int i = 0; i <= N; i++)
        isPrime[i] = true; 
    isPrime[0] = isPrime[1] = false; 
    for(int i = 2; i * i <= N; ++ i)
    {
        if(isPrime[i] == true){
            for(int j = i * i; j <= N; j += i)
                isPrime[j] =  false; 
        }
    } 
}
void print_x()
{
    ll x; cin >> x; 
    ll y = sqrt(x); 
    if(y*y == x && isPrime[y] == true) cout << "YES\n";
    else cout << "NO\n"; 
}
int main()
{
    sieve(maxn); 
    int n; cin >> n; 
    vector <string> output; 
    for(int i = 0; i < n; ++i)
        print_x(); 
    return 0; 
}
