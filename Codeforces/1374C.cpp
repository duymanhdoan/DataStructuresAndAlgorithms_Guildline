#include <bits/stdc++.h>
using namespace std;
#define MAX 100011
#define pii pair<int, int>
#define ull unsigned long long
#define ll long long
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define Rep(i,a,b) for(int i=b-1; i>=a;i--)
#define REP(i,a,b) for(int i=b; i>=a;i--)
#define sfor(it,m) for (set <int> ::iterator it=m.begin(); it!=m.end();it++)
#define mfor(it,m) for (map <int,int> ::iterator it=m.begin(); it!=m.end();it++)
#define sync ios::sync_with_stdio(0),cin.tie(NULL)
const int maxn = 2e5+10;

void travel (stack <char> st){

    while(!st.empty()){
        cout << st.top() << " "; 
        st.pop(); 
    }
    cout << endl; 
}

void solve(){
    
    string s; int n; 
    cin >> n; 
    cin >> s;
    stack <char> st;
    map<char,char> mapping; 
    mapping[')'] = '('; 

    for (int i=0; i<n; i++)
    {
        char c = s[i]; 
        if(!st.empty() && st.top()==mapping[c]) 
        {
            // cout << st.top() << " " <<c<<endl;
            st.pop(); 
        }
        else 
            st.push(c); 

    }
    cout << st.size()/2 << endl; 
    // travel(st); 
}
int main()
{
    int T; cin >> T; 
    while(T--){
        solve();   
    }  

    return 0;
}
