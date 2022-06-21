#include <bits/stdc++.h> 
using namespace std; 

string reverse(string s, int st)
{
    int j = s.size() - 1, i = st; 
    while (i <= j)
        swap(s[i], s[j]), i++, j--; 
    return s; 
}

string nextPermutation(string nums)
{
    if(nums.size() == 0) return ""; 
    for(int r = nums.size() - 1; r >= 1; r--)
    {
        if(nums[r-1] < nums[r]) 
        {
            nums = reverse(nums,r);
            // cout << nums << endl; 
            for(int j = r; j < nums.size(); j++) 
                if(nums[r-1] < nums[j]) 
                {
                    swap(nums[r-1], nums[j]); 
                    return nums; 
                } 
            return nums; 
        }

    }
    return nums; 
}

int minSwap(string nums, string target)
{
    int cnt = 0; 
    for(int i=0; i < nums.size(); i++)
    {
        int j = i; 
        while(nums[i] != target[j]) j++; 
        while(i < j)
        {
            swap(target[j], target[j-1]);
            j--, cnt ++; 
        }
    }
    return cnt; 
}

int main ()
{
    string nums = "12345", target = "";  int k = 10; 
    // cin >> s >> k;  
    target = nums; 
    for(int i=0; i < k; ++i)
    {
        target = nextPermutation(target);
        cout << target << " "; 
    } 
    cout << "\n"; 
    cout << minSwap(nums, target) << endl;  
    return 0; 
}