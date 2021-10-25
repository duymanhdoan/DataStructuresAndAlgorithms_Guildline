#include <bits/stdc++.h> 
using namespace std; 
// 1011. Capacity To Ship Packages Within D Days
// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

class Solution {
public:
    
    
    bool P(int capacity, vector <int> w, int days)
    {
        days -- ;
        long long curr_we = 0; 
        for(int i=0; i<w.size(); i++ ) 
        {
            if(curr_we + w[i] <= capacity)
                curr_we += w[i];
            else 
                curr_we = w[i], days--; 
        }
        //cout << capacity << " " << days << endl; 
        return days >= 0; 
    }
    
    int binarySearch(vector <int> w, int days)
    {
        int lo = 0 , hi = 0; 
        for(int i=0; i<w.size(); i++) 
            lo = max(lo,w[i]), hi += w[i]; 

        while(lo<hi)
        {
            int capacity = lo + (hi - lo)/2; 
            if(P(capacity, w, days))
                hi = capacity;
            else 
                lo = capacity + 1;  
        }

        return lo;
    }

    
    int shipWithinDays(vector<int>& weights, int days) {
        return binarySearch(weights, days);
    }
};

int main()
{
    return 0; 
}