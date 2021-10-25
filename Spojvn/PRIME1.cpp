#include <bits/stdc++.h> 
using namespace std; 

#define ll long long 
#define nl endl 
void seive_LR(ll L, ll R) 
{
    vector <bool> isPrime(R - L + 1, true); 

    for(ll i = 2; i * i <= R; ++i)
    {
        for(ll j = max(i * i, (L + i - 1)/ i * i); j <= R; j+=i )
        {
            isPrime[j - L] = false; 
        }
    }
    if( 1 >= L) isPrime[1 - L] = false; 
    
    for(ll x = L;  x <= R; x++ )
    {
        if (isPrime[x - L])
        {
            cout << x << nl; 
        }
    }

}

int main()
{
    int T; cin >> T; 
    while(T--)
    {
        ll l , r; 
        cin >> l >> r; 
        seive_LR(l ,r); 
    }
    return 0; 
}