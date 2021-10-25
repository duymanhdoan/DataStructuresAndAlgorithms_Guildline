#include <bits/stdc++.h> 
using namespace std; 

#define ll long long 
#define nl endl 
const int maxn = 1e5 + 10; 
int isPrime[maxn]; 

void seive(int maxn) 
{
    for(int i = 2; i*i <= maxn ; ++i)
     {
         if(isPrime[i]==0)
         {
             for(int j = i*i; j <= maxn; j+=i)
                if(isPrime[j] == 0) 
                    isPrime[j] = i; 
         }
     }
    for( int i = 2; i <= maxn;++i)
        if(isPrime[i] == 0)
            isPrime[i] = i; 
    for(int i=2; i<=maxn; ++i) 
        cout << isPrime[i] <<" "; 
}

int main()
{
    // int T; cin >> T; 
    seive(200); 
    int L, R, cnt = 0; cin >> L >> R; 
    for(int i = max(12,L); i<= R; ++i)
    {
        int s = 1; 
        while()
        if(s > i) cnt++;  
    }
    cout << cnt << endl; 
    return 0; 
}