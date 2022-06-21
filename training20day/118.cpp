#include <bits/stdc++.h> 
using namespace std; 
 


int main()
{
    int n; cin >> n; 
    int loop = n; 
    vector < vector<int> > answer; 

    for(int i = 1; i<=n; ++i)
    {
        vector <int> tmp; 
        for(int j = 1; j<=i; ++j)
        {
            if(j == 1 || j == i)
                tmp.push_back(1); 
            else 
                {
                    int m = answer[i-2][j-1] + answer[i-2][j-2] ;
                    tmp.push_back(m);
                } 
        }
        answer.push_back(tmp); 
    } 
   
    for(int i=0; i<n; ++i){
        for(int j=0; j<answer[i].size(); j++)
            cout << answer[i][j] <<" "; 
        cout << endl; 
    }
    return 0; 

}