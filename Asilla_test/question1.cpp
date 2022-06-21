#include <bits/stdc++.h> 
using namespace std; 
const int maxx = 3000; 
const int inf = INT_MAX; 
int a[maxx], target, start, sizeofnum; 

int MinDistance(int a[], int start, int target)
{
    int ans = INT_MAX; 
    for(int i=0; i<sizeofnum; i++) 
        if(a[i] == target) 
            ans = min(ans, abs(start - i)); 
    return ans; 
}

int main()
{
    cin >> sizeofnum;  
    for (int i=0; i<sizeofnum; i++) cin >> a[i]; 
    cin >> target >> start; 
    cout << MinDistance(a,start, target)<<"\n"; 
    return 0; 
}
