#include <bits/stdc++.h>
using namespace std;
#define ll long long  
bool isprime(ll p)
{
    if(p < 2) return false; 
    for(int i = 2; i*i <= p; ++i)   
        if(p%i == 0) return false; 
    return true; 
}

int main()
{
    int n; cin >> n; 
    if( isprime(n-2) == true) cout << 2 << " " << n - 2;
    else cout << -1; 
    cout << endl; 
    return 0; 
}