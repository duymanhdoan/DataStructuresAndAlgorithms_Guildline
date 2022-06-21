#include<bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    vector< vector<int> > threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        vector < vector <int> > ans; 
        set < vector<int> > filtter; 
        for(int i=0; i<nums.size(); i++)
        {
            if(i>0) 
            {
                if(nums[i] == nums[i-1]) continue; 
            }
            
            int l = i+1, r = nums.size() - 1; 
            int s = -nums[i];
            while(l<r)
            {
                if (nums[l] + nums[r] == s) 
                {
                    vector <int> tmp; 
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[l]);
                    tmp.push_back(nums[r]);
                    sort(tmp.begin(), tmp.end()); 
                    filtter.insert(tmp); 
                    l++, r--; 
                }
                else if(nums[l] + nums[r] > s) 
                    r--; 
                else 
                    l++; 
            }
        }
        for(auto elem: filtter) 
            ans.push_back(elem); 
        return ans; 
    }
    
};

int main()
{

    Solution a; 
    
    vector <int> nums; 
    
    int n; 
    cin >> n; 
    for(int i=0; i<n; ++i)
    {
        int x; cin >> x; 
        nums.push_back(x); 
    }
    vector < vector<int> > answer; 
    answer = a.threeSum(nums); 
    for(auto elem : answer)
    {
        cout << elem[0] <<" "<<elem[1] <<" "<<elem[2] << endl; 
    }
    return 0; 
}