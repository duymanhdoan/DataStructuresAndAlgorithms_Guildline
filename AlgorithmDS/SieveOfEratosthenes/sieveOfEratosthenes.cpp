#include <bits/stdc++.h> 
using namespace std;
const int N = 10e6;
const int maxn = 10e7 + 5; 
bool st[maxn];
int primes[maxn], cnt; 

bool isPrime[maxn];
vector <int> p; 

void get_primes()
{
    for (int i = 2; i <= N; i ++ )
    {
    
        if (!st[i]) primes[cnt ++ ] = i;
        for (int j = 0; primes[j] <= N / i; j ++ )
        {    
            st[primes[j] * i] = true;
            if (i % primes[j] == 0) break;
        }
    }
}



void sieve() {

    for(int i = 0; i <= N;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i) {
         if(isPrime[i] == true) {
             // Mark all the multiples of i as composite numbers
             for(int j = i * i; j <= N; j += i)
                 isPrime[j] = false;
        }
    }
     
    for(int i=2; i<=N; i++) if(isPrime[i]==true) p.push_back(i); 
}

int main()
{
    
    return 0; 
}