#include <bits/stdc++.h> 
using namespace std; 
const int maxn = 100; 
void solve()
{
    int n; cin >> n; 
    vector <int> a; 
    for(int i=0; i<2*n; i++) 
    {
        int x; cin >> x; 
        a.push_back(x); 
    }
    sort(a.begin(),a.end()); 
    for(int i=0; i<n; i++)
        cout << a[i] <<" " << a[i+n] << " ";
    cout << endl; 
}
int main() {    
    int T; cin >> T;
    while(T--)
    {
        solve(); 
    }
    return 0;
}
