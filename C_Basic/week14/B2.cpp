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
    set <int> s; 
    int a[] = {1, -1 ,2, 1, -2 , 3, 2, 1, 1, 2 , 3, 4, -5, 4, 5, 2}; 
    int n = sizeof(a)/sizeof(a[0]); 
    
    // Cách 1: 
    F0R(i,n) 
        s.insert(a[i]); 
    // Cách 2: 
   
    // tạo một set sort giảm dần. 
    set <int,cmp> reverseS; 
    F0R(i,n) reverseS.insert(a[i]);  

    for(set<int> ::iterator it = reverseS.begin(); it!= reverseS.end(); it++)
    {
        cout << *it << nl; 
    }
    cout << nl;  
    for(set<int, cmp> ::reverse_iterator it = reverseS.rbegin(); it!=reverseS.rend(); it++)
    {
        cout << *it<< nl; 
    }
   
    int k = 5; 
    if(reverseS.find(k)!=reverseS.end()) 
        cout << "YES";
    else 
        cout << "NO"; 
    cout << nl << nl << nl; 
    return 0; 
}