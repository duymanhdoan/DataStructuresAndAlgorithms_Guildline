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
 #define pb push_back

const int maxn = 10e5 + 10; 

vector <int> p; 
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
    for(int i=2; i < N; i++) if(isPrime[i]==1) p.pb(i); 
}

int calc(int x)
{
    if(isPrime[x]) return 0;  
    int lo = 0, hi = p.size()-1; 
    while(lo < hi)
    {
        int mid = lo + (hi - lo) /2; 
        if(p[mid] >= x) 
            hi = mid; 
        else 
            lo = mid + 1; 
    }
    return p[hi] - x; 
}
int a[555][555];
int main()
{
    sieve(maxn); 
    int n,m; 
    cin >> m >> n; 
    FOR(i, 0, m) 
        FOR(j, 0, n)
            cin >> a[i][j]; 
    int ansRow = maxn, ansCol = maxn; 
    FOR(i, 0, m) 
    {
        int resRow = 0; 
        FOR(j, 0, n)
            resRow += calc(a[i][j]); 
        ansRow = min(ansRow, resRow); 
    }
    FOR(i, 0, n) 
    {
        int resCol = 0; 
        FOR(j, 0, m)
            resCol += calc(a[j][i]); 
        ansCol = min(ansCol, resCol); 
    } 
    cout << min(ansRow, ansCol) << endl; 
    return 0; 
}