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

vector <char> op; 
vector <int> val; 

int priority(char op){
// Trả về 2 nếu là nhân hoặc chia, 1 nếu là cộng hoặc trừ   
    if (op == '+' || op == '-') return 1;
    else return 2;
}

void process_op(vector<int>& val, char op)
{
    int r = val.back(); val.pop_back();
    int l = val.back(); val.pop_back();
    switch(op)
    {
        case '+': val.push_back(l + r); break;
        case '-': val.push_back(l - r); break;
        case '*': val.push_back(l * r); break;
        case '/': val.push_back(l / r); break;
    }
}

bool isdigit(char c){
    bool f = false; 
    string valid = "0123456789"; 
    for (int i = 0; i< valid.length(); i++)
        if(valid[i] == c) f = true; 

    return f; 
}

int evaluate(string s){
    
    for (int i = 0; i < (int)s.length(); ++i){
        
        if (isdigit(s[i])){
            val.push_back(s[i] - 48);
        } 
        else {
            // cout << s[i] << endl; 
            char cur_op = s[i]; // toán tử hiện tại
             // xử lý các toán tử ngay trước nó có độ ưu tiên bằng hoặc lớn hơn
            // chú ý rằng nếu thay dấu >= bằng dấu >
            //cout << priority(s[i]) << " " << s[i] << endl;  
            while (!op.empty() && priority(op.back()) > priority(cur_op)){
            // cout << "travel in op \n";                
            //      for(int travel = 0; travel < op.size(); travel ++) cout << op[travel] << " "; 
                
                process_op(val, op.back());
                op.pop_back();
            }
            op.push_back(cur_op);
        }
    }            
    // do danh sách toán tử có độ ưu tiên tăng dần nên ta có thể xử lý
    // lần lượt như trong bài toán chỉ có + và -
    // chú ý là ta xử lý ngược từ đáy về đầu, nên các toán tử được xử lý
    // sẽ tạo thành một dãy giảm theo thứ tự ưu tiên
    for(int i=0; i<op.size(); i++) 
        cout << " " << op[i] << " ";
    cout << endl; 
    for(int i=0; i<val.size(); i++) 
        cout << " " << val[i] << " ";
    cout << endl; 
    

    while (!op.empty()){
        process_op(val, op.back());
        op.pop_back();
    }
    return val.back();
}


int main()
{
    freopen("input.txt","rb",stdin);
    //freopen("output.txt","w",stdout);
    string s;
    getline(cin,s); fflush(stdin); 
    int answer = evaluate(s); 
    cout << answer << "\n\n"; 

    
    return 0;
}
