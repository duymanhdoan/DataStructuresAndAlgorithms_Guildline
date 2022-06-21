#include <bits/stdc++.h> 
using namespace std; 

struct interval
{
    int l = 0; 
    int r = 0; 
}; 
struct queries 
{
    int q; 
    int idx; 
}; 
bool compareVal (interval x, interval y){return x.l < y.l; }
bool compareQuelByQ (queries x, queries y){return x.q < y.q; }
bool compareQuelByIdx (queries x, queries y){return x.idx < y.idx; }
void solve(vector <interval> val, vector <queries> que){
    multimap <int,int> mul; 
    multimap <int,int> :: iterator loop;
    sort(val.begin(), val.end(), compareVal);
    sort(que.begin(), que.end(), compareQuelByQ);
    vector <int> res; 
    int i = 0;  
    for(int lp = 0; lp < que.size(); lp ++)
    {
        while ( i < val.size() && val[i].l <= que[lp].q) 
        {
            mul.insert( make_pair( val[i].r - val[i].l + 1 , val[i].r)); 
            i++; 
        }
        while (!mul.empty()) 
        {
            multimap <int,int> :: iterator loop = mul.begin();
            if(mul.find(loop->first)->second < que[lp].q) 
                mul.erase(loop->first);  
            else 
                break; 
        }
        if(!mul.empty()) 
        {
            loop = mul.begin(); 
            que[lp].q = mul.find(loop->first)->first;
        } 
        else que[lp].q = -1;  
    }
    sort(que.begin(), que.end(), compareQuelByIdx); 
    for(int lp = 0; lp < que.size(); lp ++)
        cout << que[lp].q << " ";
}

int main()
{
    vector <interval> val;  
    vector<queries>  que;  
    interval tmp; 
    // int n = 0, m = 0; 
    // cin >> n; 
    // for(int i=0; i<n; i++) {
    //     interval tmp; cin >> tmp.l >> tmp.r; 
    //     val.push_back(tmp); 
    // }
    // cin >> m; 
    // for(int i=0; i<m; i++) {
    //     queries tmp; cin >> tmp.q; 
    //     tmp.idx = i; 
    //     que.push_back(tmp); 
    // } 
    tmp.l = 1, tmp.r = 4; val.push_back(tmp); 
    tmp.l = 2, tmp.r = 4; val.push_back(tmp);
    tmp.l = 3, tmp.r = 6; val.push_back(tmp);
    tmp.l = 4, tmp.r = 4; val.push_back(tmp);

    queries qq; 
    qq.q = 2, qq.idx = 0; que.push_back(qq);
    qq.q = 3, qq.idx = 1; que.push_back(qq);
    qq.q = 4, qq.idx = 2; que.push_back(qq);
    qq.q = 5, qq.idx = 3; que.push_back(qq);
    solve(val, que); 
    return 0; 
}