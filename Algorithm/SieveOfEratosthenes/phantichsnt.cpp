#include <bits/stdc++.h> 
using namespace  std; 
int minPrime[100000];
void  sevie(int n){
    n == 10; 
     for(int i = 2; i*i <= n ; ++i)
     {
         if(minPrime[i]==0)
         {
             for(int j = i*i; j <= n; j+=i)
                if(minPrime[j] == 0) 
                    minPrime[j] = i; 
         }
     }
     for( int i = 2; i <= n;++i)
         if(minPrime[i] == 0)
             minPrime[i] = i; 
    
    
}

vector <int> factorize_seive(int n)
{
    sevie(n); 
    for(int i=0; i<=n+10; ++i)
    {
         cout <<"[" << i << "]="<<minPrime[i]<<" ";
         if(i%10==0 && i > 1) cout << endl; 
    } 
    vector <int> res; 
    while(n!=1)
    {
        int snt = minPrime[n]; 
        res.push_back(snt); 
        n /= snt; 
        cout << snt << "*"; 
    }
    return res; 
}

int main()
{
    vector <int> v = factorize_seive(500); 

    cout << "\n\n\n";
    return 0; 
}