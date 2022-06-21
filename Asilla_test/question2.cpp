#include <bits/stdc++.h> 
using namespace std; 
string predict(string sub){
    long long tmp = 0; 
    for(char c:sub)
        tmp = tmp * 10 + c - 48; 
    tmp ++; 
    return to_string(tmp); 
}
bool ok (string sub){
    long long x = 0; 
    for(int i = 0; i < sub.size(); i++) x = x*10 + sub[i] - 48; 
    return x == 0; 
}
int main(){
    // s = "0000000100000990098009700960000";
    string s; cin >> s; int n = s.size(); 
    for(int Try = 1; Try <= n - Try + 1; Try ++){
            int idx = n - Try, v1 , v2, cnt = 1; 
            v1 = idx, v2 = n;  
            while(idx > 0)
            {
                int size; string r = "", pre = "", l = "";  
                for(int i = v1; i < v2; i++)  r += s[i]; 
                pre = predict(r);
                size = pre.size();  
                // cout << r << " " << l << " " << pre << " " <<" "<< Try << endl; 
                // search sub string 
                while(v1 - size >= 0){
                    string calc = ""; 
                    for(int i = 0; i < size; ++i) calc += s[v1 - size + i]; 
                    if(pre != calc && s[v1 - 1] == '0') v1 --; 
                    else 
                    {
                        l = calc;
                        break; 
                    }  
                }
                // only left zero number 
                if(v1 - size < 0){
                    string sub = ""; 
                    for(int i = 0; i < v1 ; ++i) sub += s[i]; 
                    if(ok(sub)) idx = 0; 
                }
                // substring is match 
                if(l == pre) {
                    v2 = v1; 
                    v1 -= size; 
                    idx = v1, cnt ++;
                }  
                else 
                    break; 
                // unsatisfied conditional 
            }
            cout << idx << " " << cnt << endl; 
            if (idx == 0 && cnt > 1) return cout << "true\n",0; 
        }
    return cout << "false\n",0;  
}
