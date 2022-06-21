#include <bits/stdc++.h> 
using namespace std; 

bool binarySearh(vector <int> a, int target)
{
    int l = 0, r = a.size(); 

    while(l < r)
    {
        int m = l + (r - l)/ 2; 
        if(a[m] == target) 
        {
            return true; 
        }
        else if (target > a[m])
            l = m + 1; 
        else 
            r = m - 1; 
    }
    return false; 
}


int main()
{
    int n, k; vector <int> v; 
    cin >> n >> k; 
    for(int i=0; i<n; i++) 
    {
        int x; cin >> x; v.push_back(x); 
    }
    sort(v.begin(), v.end()); 
    bool ans = binarySearh(v, k); 
    if(ans) cout <<"Found!"; 
    else cout << "Not Found!"; 
    return 0; 
}