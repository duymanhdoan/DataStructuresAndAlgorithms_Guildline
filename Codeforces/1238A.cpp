#include <bits/stdc++.h> 
using namespace std;


void solve()
{
    long long x,y; cin >> x >> y; 
    if(x - y <2) cout <<"NO";
    else cout << "YES"; 
    cout << "\n"; 
}
int main()
{
    int T; cin >> T;
    while(T--)
        solve();  
    return 0; 
}