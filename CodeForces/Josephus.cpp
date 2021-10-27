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

queue <int> qu; 
vector < int > rel; 
void solve(){
    // freopen("input.txt","r",stdin);
    int n, m; 
    cin >> n >> m; 
    for(int i=1; i<=n; i++) 
    {
        qu.push(i); 
    }
    int cnt = 0; 
    while(!qu.empty()){
        cnt ++; 
        int x = qu.front(); 
        qu.pop(); 
        
        if(cnt == m) {
            rel.push_back(x); 
            cnt = 0; 
        }
        else 
            qu.push(x); 
    }
    for(int i=0; i<rel.size(); i++) 
        cout << rel[i] <<" "; 
    cout << endl; 
}


int main(){

    solve(); 
    return 0;
}
