#include <bits/stdc++.h> 
using namespace std; 

int findmax(int x, int y)
{
    if(x > y) return x; 
    return y; 
}

void solve(vector <int> v) 
{
    int max1  = -1,  max2 = -1; 
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] > max1) {
            max1 =  v[i]; 
        } 
        if(max2 < v[i] && v[i] != max1) max2 = v[i]; 
    }
    cout << max2 << endl; 
}


int main()
{
    int n; 
    vector <int> v; 
    cin >> n; 
    for(int i=0; i<n; i++) 
    {
        int x; cin >> x; v.push_back(x); 
    }
    solve(v);  
    return 0; 
}