#include <bits/stdc++.h> 
using namespace std; 
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size(), fi = 0, se = 0; 
        for(int i=0; i<n; ++i)
        {
            int lo = i+1, hi = n-1, cmp = target - numbers[i]; 
            while(lo <= hi)
            {
                int m = (lo + hi)/2; 
                if(cmp == numbers[m]) 
                {
                    fi = i, se = m;
                    break; 
                }
                else if(cmp < numbers[m]) hi = m - 1; 
                else lo = m + 1; 
            }
        }
        vector <int> ans;  
        ans.push_back(fi + 1),ans.push_back(se+ 1); 
        return ans; 
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
    vector<int> ans = sol.twoSum(nums, target); 
    cout << ans[0] <<" "<<ans[1] << endl; 
    
    return 0;  
}