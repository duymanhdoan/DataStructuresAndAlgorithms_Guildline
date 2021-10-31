#include <bits/stdc++.h> 
using namespace std; 


int bsearch(int l, int r, int k,vector <int> nums)
{
    int lo = l, hi = r; 
    while(lo < hi)
    {
        int mid = (hi + lo)/2; 
        if(nums[mid] == k) 
            return mid; 
        else if(nums[mid] > k) 
            hi = mid;
        else 
            lo = mid + 1; 
    }
    return -1; 
}


vector < vector<int> > threeSum(vector<int> & nums)
{
    int n = nums.size(); 
    sort(nums.begin(), nums.end()); 
    set < vector <int> > s; 
    vector <int> tmp; 
    tmp.resize(3);  
    for(int i=0; i<n; ++i)
        for(int j=i+1; j<n; j++) 
            if(bsearch(j+1,n, -nums[i]-nums[j], nums)!=-1)
            {
                tmp[0] = nums[i], tmp[1] = nums[j], tmp[2] = -nums[i] -nums[j]; 
                sort(tmp.begin(),tmp.end()); 
                s.insert(tmp); 
            } 

    vector < vector <int> > ans;
    for(auto triplet:s)
        ans.push_back(triplet); 
    return ans; 
}


int main()
{
    int n; 
    cin >> n;
    vector <int> nums; 
    for(int i=0; i<n; ++i)
    {
        int x; cin >> x; nums.push_back(x); 
    } 

    vector< vector<int> > ans;
    ans = threeSum(nums); 
    for(auto triplet : ans)
    {
        cout << triplet[0] <<" "<<triplet[1] << " " <<triplet[2] <<endl; 
    }
    return 0; 
}