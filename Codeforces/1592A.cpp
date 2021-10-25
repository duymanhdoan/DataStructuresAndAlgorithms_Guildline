#include <bits/stdc++.h> 
using namespace std; 
void solve()
{
    int n, H; cin >> n >> H; 
    vector <int> v; 
    for(int i=0; i<n; i++) 
    {
        int x; cin >> x; v.push_back(x); 
    }
    sort(v.begin(), v.end()); 
    reverse(v.begin(), v.end()); 
    int ans = H/ (v[0] + v[1]);
    ans *=2;  
    if( H%(v[0]+v[1]) == 0) 
        cout << ans;
    else if(H%(v[0] + v[1]) <= v[0]) 
        cout << ans + 1;
    else 
        cout << ans + 2;   
    cout << endl; 
}


int main()
{
    int T; cin >> T; 
    while(T--)
        solve(); 
    return 0; 
}