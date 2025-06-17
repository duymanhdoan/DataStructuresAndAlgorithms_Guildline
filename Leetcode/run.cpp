#include <bits/stdc++.h> 
using namespace std; 

string run(string s)
{
    string res = ""; 
    int resLen = 0; 

    for (int i=0; i<s.length(); i++)
    {
        // odd length 
        int l = i, r = i; 
        while( l >= 0 && r < s.length() && s[l] == s[r])
        {
            if(r - l + 1 > resLen) 
            {    
                resLen = r - l + 1; 
                res = ""; 
                for(int save = l; save <= r; save ++)
                    res += s[save];
            }
            l--, r++;  
        }
        // even length 
        l = i, r = i + 1; 
        while(l >= 0 && r < s.length() && s[l] == s[r])
        {
            if(r - l + 1 > resLen) 
            {
                resLen = r - l + 1; 
                res = ""; 
                for (int save = l; save <= r; save ++)
                    res += s[save]; 
            }
            l--, r++;
        }
    }
    // cout << resLen << "\n"; 
    return res; 
}

int main()
{
    string s; cin >> s;
    cout << "result: " << run(s) << '\n';   
    return 0; 
}
