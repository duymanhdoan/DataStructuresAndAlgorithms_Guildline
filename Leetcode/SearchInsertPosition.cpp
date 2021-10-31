#include <bits/stdc++.h> 
using namespace std; 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size(); 
        while(lo < hi)
        {
            int m = (lo + hi) / 2; 
            if(nums[m] >= target)
                hi = m;
            else 
                lo = m + 1; 
        }
        return lo; 
    }
    
};

int main()
{
    int n, target; cin >> n >> target; 
    vector <int> nums; 
    for(int i=0; i<n; ++i)
    {
        int x; cin >> x; nums.push_back(x); 
    }
    Solution sol; 
    cout << sol.searchInsert(nums, target); 
    cout << endl;
    return 0;  
}