#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstring>
using namespace std;
 
const int N = 1e7+5;
 
int primes[N], cnt;     // primes[]存储所有素数
bool st[N];         // st[x]存储x是否被筛掉
 
void get_primes(int n)
{
    
    
    for (int i = 2; i <= n; i ++ )
    {
    
    
        if (!st[i]) primes[cnt ++ ] = i;
        for (int j = 0; primes[j] <= n / i; j ++ )
        {
    
    
            st[primes[j] * i] = true;
            if (i % primes[j] == 0) break;
        }
    }
}
 
bool check(int n)  
{
    
      
    for (int i=0; primes[i]*primes[i]<=n; i++)  
        if (n%primes[i]==0)  
            return false;  
    return true;  
}  
long long ans[100005];
int main()
{

    
    get_primes(1e6);
    cout << cnt << endl; 
    // int t;
    // cin >> t;
    // while(t--)
    // {
    
    
    //     int d; cin >> d;
    //     if(d==1)
    //     {
    
    
    //         cout << 6<<endl;
    //         continue;
    //     }
    //     long long minn = 1e9;
    //     for(int i = 1; i < cnt; i ++)
    //     {
    
    
    //         int flog = 0;
    //         if(primes[i] - 1 >= d)
    //         {
    
    
    //             for(int j = i; j < cnt;  j++)
    //             {
    
    
    //                 if(primes[j] - primes[i] >= d)
    //                 {
    
    
    //                 cout << primes[i]*primes[j] << endl;
    //                 flog = 1;
    //                 break;
    //                 }
    //             } 
    //         }
    //         if(flog == 1)break;
    //     }
    // }
    return 0;
}