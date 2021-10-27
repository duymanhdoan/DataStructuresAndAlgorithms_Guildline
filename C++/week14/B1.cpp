#include <bits/stdc++.h> 
using namespace std; 

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001; //check the limits, dummy

struct cmp {
    bool operator() (int x, int y) 
     {
         return x > y;
     }
};


int main()
{
    map <int,int> m, m1; 
    int a[] = {1, -1 ,2, 1, -2 , 3, 2, 1, 1, 2 , 3, 4, -5, 4, 5, 2}; 
    int n = sizeof(a)/sizeof(a[0]); 
    
    // Cách 1: 
    F0R(i,n) 
        m.insert(make_pair(a[i],0)); 
    // Cách 2: 
    F0R(i,n) 
        m1[a[i]] ++; 
    // tạo một map sort giảm dần theo key. 
    map <int, int, cmp> reverseM; 

    F0R(i,n) reverseM[a[i]]++; 

    for(map<int,int> ::reverse_iterator it = reverseM.rbegin(); it!=reverseM.rend(); it++)
    {
        cout << (*it).first << " " << (*it).second << nl; 
    }
    cout << nl; 
    for(map<int,int> ::iterator it = reverseM.begin(); it!=reverseM.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << nl; 
    }

    // đếm phần tử lặp lại trong mảng số nguyên. 
    map <int,int> countNumber; 
    int b[] = {1,2,2,2,1,2,23,3,4,1,2,3,4,1}; 
    int size_b = sizeof(b)/sizeof(b[0]); 
    F0R(i,size_b) countNumber [b[i]] ++ ; 
    for(map<int,int> :: iterator it = countNumber.begin(); it!= countNumber.end(); it++) 
    cout << "số " << (*it).first << " lặp lại " << (*it).second << " lần" << nl;  

    int k = 5; 
    if(countNumber.find(k)!=countNumber.end()) 
        cout << "YES";
    else 
        cout << "NO"; 
    cout << nl << nl << nl; 
    return 0; 
}