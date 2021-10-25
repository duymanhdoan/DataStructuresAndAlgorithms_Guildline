#include <bits/stdc++.h> 
using namespace std; 
void solve()
{
    int ans = 0, cnt = 0; 
    string s; cin >> s; 
    map < char , int > m; 
    for(int i=0; i<s.size(); i++) m[s[i]] ++; 
    
    for(map<char,int> :: iterator it = m.begin(); it!= m.end(); it++) 
    {
        if( (*it).second >=2 ) ans ++; 
        else 
            cnt ++; 
    }
    ans += cnt/2; 
    cout << ans << endl; 
}

int main()
{
    int T; cin >> T;
    while(T--)
        solve(); 
    return 0; 
}