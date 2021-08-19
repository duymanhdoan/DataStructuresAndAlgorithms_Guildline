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
// #include <windows.h>

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


stack<int> process_op(stack<int> val, char op){
    int r = val.top(); val.pop();
    int l = val.top(); val.pop();
    switch(op)
    {
        case '+': val.push(l + r); break;
        case '-': val.push(l - r); break;
        case '*': val.push(l * r); break;
        case '/': val.push(l / r); break;
    }
    return val; 
}
bool isdigit(char c){
    bool f = false; 
    string valid = "0123456789"; 
    for (int i = 0; i< valid.length(); i++)
        if(valid[i] == c) f = true; 

    return f; 
}

int solve(string s){
    stack <int> evaluate; 

    for(int i=0; i<s.length(); i++){
        
        if(s[i] == ' ') 
            continue;
        if(isdigit(s[i])){ 
            evaluate.push(s[i]-48); 
        }
        else{
            evaluate = process_op(evaluate,s[i]);
        }
    } 
    return evaluate.top();
}

int main()
{
    // SetConsoleOutputCP(1252);
    freopen("input.txt","rb",stdin);
    string s; 
    getline(cin,s); fflush(stdin);  
    cout << s << endl; 
    int answer = solve(s);
    cout << " gia tri bieu thuc: "<<answer << "\n"; 
    return 0;
}
