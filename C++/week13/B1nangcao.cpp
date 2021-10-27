#include <bits/stdc++.h> 
using namespace std; 
const int maxn = 100; 

struct dovat{
    int giatri; 
    int khoiluong; 
}; 

vector <dovat> a; 

bool cmpAvg(dovat x, dovat y) 
{
    return (x.giatri/x.khoiluong > y.giatri/y.khoiluong); 
}

bool cmpValue(dovat x, dovat y) 
{
    return (x.giatri > y.giatri); 
}
int main() {    
    int n, k; 
    cin >> n >> k; 
    for(int i=0; i <n; i++)
    {
        int value, weight; 
        cin >> value >> weight; 
        dovat tmp ; 
        tmp.giatri = value ; 
        tmp.khoiluong = weight; 
        a.push_back(tmp); 
    }
    sort(a.begin(),a.end(),cmpValue);  
    int ans = 0 , weight = 0; 
    for(int i=0; i<a.size(); i++)
    {
        if(weight + a[i].khoiluong <= k)
        {
            ans += a[i].giatri; 
            weight += a[i].khoiluong; 
        }
    }
    cout << ans << endl; 

    return 0;
}
