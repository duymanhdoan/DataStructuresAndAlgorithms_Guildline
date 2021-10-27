#include <bits/stdc++.h> 
using namespace std; 
const int maxn = 1e4+10;
const int maxx = 1000+10; 

int isPrime[maxn]; 
vector <int> p; 
void solve(int maxN)
{
    for(int i=2; i*i <= maxN; ++i)
    {
        if(isPrime[i] == 0) // là snt 
        {
            for(int j = i*i; j <= maxN; j+=i)
                isPrime[j] = i; 
        }
    }
    isPrime[0] = isPrime[1] = 1; 
    for(int i=2; i<=maxN; i++) if(isPrime[i] == 0) p.push_back(i);
    int n, k; 
    cin >> n >> k;
    int cnt = 0;  
    for(int i = 1; i< p.size() && p[i] + p[i-1] <=n ; ++i)
    {
        int prime = p[i] + p[i-1] + 1; 
        if(isPrime[prime]==0) cnt ++; 
    }
    string ans = cnt >= k?"YES\n":"NO\n";
    cout << ans;  
}
int main()
{
    solve(maxx); 
    return 0; 
}
