#include <bits/stdc++.h>
#include <vector> 
#include <map> 
using namespace std;

struct cmp {
    bool operator() (int x, int y) 
     {
         return x > y;
     }
};
 
int main()
{
   // freopen("input.txt","r",stdin); 
    int n, m; 
    cin >> n;
    map<int,int> A, B; 
 
    for(int i=0; i<n; i++)
    {
        int x; cin >> x; 
        A[x] ++; 
    }
    cin >> m; 
    for(int i=0; i<m; i++)
    {
        int x; cin >> x; 
        B[x]++; 
    }
    cout << endl; 
    for(map<int,int> ::iterator i=A.begin(); i!=A.end(); i++) 
    {
        for(map<int,int> ::iterator j=B.begin(); j!=B.end(); j++) 
        {
            int valid = (*i).first + (*j).first; 
 
            if(A.find(valid)==A.end() && B.find(valid)==B.end())
            {
                cout << (*i).first << " " <<  (*j).first;
                return 0; 
            }
        }
    }
 
    return 0; 
}