#include <bits/stdc++.h> 
using namespace std; 
class Solution {
public:
// The API isBadVersion is defined for you.
    bool isBadVersion(int version);
    int firstBadVersion(int n) {
        int lo = 1, hi = n; 
        while(lo < hi)
        {
            int m = lo + (hi - lo + 1)/2; 
            if(isBadVersion(m)==true)
                hi = m - 1;  
            else 
                lo = m + 1; 
        }
        if(!isBadVersion(lo)) 
            return lo + 1;
        else 
            return lo; 
    }
    
};

int main()
{
    int n; cin >> n; 
    Solution sol; 
    cout << sol.firstBadVersion(n) << endl; 
    return 0;  
}