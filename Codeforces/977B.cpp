#include <bits/stdc++.h>
#include <functional>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;
#define MAX 100011
#define pii pair<int, int>
#define ull unsigned long long
#define ll long long
#define fi first  
#define se second 
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define Rep(i,a,b) for(int i=b-1; i>=a;i--)
#define REP(i,a,b) for(int i=b; i>=a;i--)
#define sfor(it,m) for (set <int> ::iterator it=m.begin(); it!=m.end();it++)
#define mfor(it,m) for (map <string,int> ::iterator it=m.begin(); it!=m.end();it++)
#define sync ios::sync_with_stdio(0),cin.tie(NULL)
const int maxn = 2e5+10;

pair <string,int>  pmax(pair<string,int> cmp, string key, int value ){ 
    if (cmp.se < value) 
    {
        cmp.fi = key; 
        cmp.se = value; 
    }
    
    return cmp;
}
pair <string,int>  cpmax(pair<string,int> cmp1, pair<string,int> cmp2 ){
    
    if (cmp1.se > cmp2.se ) 
        return cmp1;
    else if (cmp2.se > cmp1.se )
        return cmp2; 
    else 
        return cmp1; 
}
void solve(){
    // freopen("input.txt","r",stdin);
    string s;
    int n, ans = 0; pair<string,int> rel;
    cin >> n; 
    cin >> s; 
    for (int i=0; i<=n-2; i++) {
        map<string,int> cnt; 
        pair<string,int> tmp; 
        for(int j=i; j<n; j+=1)
        {
            if(j+1 < n) 
            {
                string reb = ""; 
                reb = reb + s[j] + s[j+1]; 
                cnt [reb] ++; 
            }  
        }
        mfor(it,cnt){
            tmp = pmax(tmp,(*it).fi, (*it).se); 
        }
        // cout << tmp.fi <<" " << tmp.se << endl;
        rel = cpmax(rel,tmp); 
    
    }
    cout << rel.fi << endl;
}


int main(){
    solve(); 

    return 0;
}
