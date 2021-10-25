#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int __gcd(ll x, ll y) { if (y==0) return x; return __gcd(y,x%y);}

int main()
{
    // cout << __gcd(9,10) << endl; 
    ll l , r; cin >> l >> r; 
    puts("YES"); 
    for(ll run=0; run < (r - l)/2 + 1; ++ run)
        cout << l + run*2 << " " << l + run*2 + 1 << "\n"; 


    return 0; 
}