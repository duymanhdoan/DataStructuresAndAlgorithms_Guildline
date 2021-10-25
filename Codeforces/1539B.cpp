#include <bits/stdc++.h> 
using namespace std; 
int b[5000000], c[5000000]; 
string a = "abcdefghijklmnopqrstuvwxyz";
map<char,int> m; 
void solve()
{
    int l, r; cin >> l >> r; 
    cout << b[r] - b[l-1] << endl; 
}

int main()
{
    int n, q; 
    cin >> n >> q; 
    string s; cin >> s; 
    for(int i=0; i< a.length(); i++)
        m.insert(make_pair(a[i],i+1)); 
    for(int i=0; i<s.length(); i++)
        b[i+1] = m[s[i]];  

    for(int i=1; i<=n; i++)
        b[i] +=b[i-1];
    while(q--)
        solve(); 

    return 0; 
}