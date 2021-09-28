#include <bits/stdc++.h> 
using namespace std; 

bool cmp(string a, string b)
{
    return (a+b > b+a);
}
int main()
{
    int n; cin >> n; 
    vector <string> v; 
    for(int i=0; i<n; i++)
    {
        string x; cin >> x; v.push_back(x); 
    }
    sort(v.begin(),v.end(),cmp); 
    for(int i=0; i<v.size(); i++)
        cout << v[i]; 
    cout << "\n\n"; 
    return 0; 
}