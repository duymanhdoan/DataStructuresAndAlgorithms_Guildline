#include <bits/stdc++.h>
#include <stdio.h>
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
#include <functional>

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

map <char, int> mapping;  
stack <char> st; 

bool evaluate_string(){
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s; cin >> s;  
    mapping[')'] = '('; 

    for( int i=0; i<s.length(); i++) 
    {
        char cur = s[i]; 
        if (!mapping[cur])
            st.push(cur); 
        else{
            if(!st.empty() && mapping[cur]== st.top()){
                st.pop(); 
            }
            else 
                {
                    return false; 
                }
        }
    }
    if(!st.empty())
        return false; 
    return true; 
}

int main()
{
    if(evaluate_string()) 
        cout << "YES\n";
    else 
        cout << "NO\n"; 
    return 0; 
}