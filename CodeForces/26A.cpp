#include <bits/stdc++.h> 
using namespace std; 
const int maxn = 2e5+10;
const int maxx = 30000; 
int isPrime[maxn]; 
vector <int> p; 
void solve()
{
    int n; cin >> n; 
    for(int i=2; i*i <= maxx + 5; ++i)
    {
        if(isPrime[i] == 0)
        {
            for(int j = i*i; j <=maxx; j+=i)
                if(isPrime[j]==0) isPrime[j] = i; 
        }
    }
    int cnt = 0; 
    for(int i=2; i<=maxx; i++) if(isPrime[i] == 0) p.push_back(i);

    for(int number = 6; number <=n; ++ number)
    {
        int i = 0, ct = 0; 
        while(p[i] <= number  && i < p.size())
        {
            if(number%p[i]==0) ct ++;  
            i++; 
        }
        if(ct == 2) cnt ++; 
    }
    cout << cnt << endl ;
}
int main()
{
    solve(); 
    return 0; 
}
