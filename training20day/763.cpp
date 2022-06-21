#include<bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector <int> answer(5,0); 
        map < char, int > m; 
        for(int i=0; i< s.size(); i++)
        {
            m[s[i]] = i; 
        }
        for(map <char, int> ::iterator it = m.begin(); it!= m.end(); it++)
        {
            cout << (*it).first <<" "<<(*it).second <<endl; 
        }
        return answer; 
    }
};



int main()
{

    Solution sol;
    string s; 
    s = "ababcbacadefegdehijhklij"; 
    sol.partitionLabels(s);  
    
    return 0; 
}