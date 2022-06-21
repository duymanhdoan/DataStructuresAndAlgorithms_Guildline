#include<bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    int balancedString(string s) {
        map <char, int> hm; 
        int ss = s.size(), min_len = s.size(); 
        int target = ss / 4; 
        for(int i=0; i < ss; ++i)
            hm[s[i]] ++; 
        int l = 0; 
        
        if(isbalance(hm,target)) 
            return 0; 

        for( int r = 0; r < ss; ++r)
        {
            hm[s[r]] --; 
            if(isbalance(hm,target))
            {
                min_len = min(min_len, r - l + 1); 
                while(l <= r)
                {
                    hm[s[l]]++; 
                    l ++; 
                    if(isbalance(hm,target)) 
                        min_len = min(min_len, r - l + 1);
                    else 
                        break;  
                }
                

            }
        }
        return min_len; 
    }


    bool isbalance (map<char,int> m, int target)
    {
        for(map<char,int> ::iterator i=m.begin(); i!=m.end(); i++)
            if( (*i).second > target )
                return false; 
        return true; 
    }
};




int main()
{

    Solution sol;
    string s; 
    s = "WQWRWEQW"; 
    int min_result = sol.balancedString(s);  
    cout << min_result << endl; 

    return 0; 
}