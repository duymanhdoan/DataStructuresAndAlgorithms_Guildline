#include <bits/stdc++.h> 
using namespace std; 
class Solution {
public:
    int mySqrt(int x) {
        int lo = 0, hi = x, ans = 0; 
        while(lo <= hi)
        {
            int m = (lo + hi)/2; 
            if(m*m <= x)  
                ans = max(ans,m), lo = m + 1;  
            else 
                hi = m - 1;  
        }
        return ans; 
    }
    
};

int main()
{
    int x; cin >> x; 
    Solution a; 
    cout << a.mySqrt(x); 
    return 0;  
}