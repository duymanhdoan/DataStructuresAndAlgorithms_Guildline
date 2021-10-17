#include <bits/stdc++.h> 
using namespace std;
// tốn độ phức tạp O(d)
bool isPrime(int d)
{
    for(int i = 2; i< d; ++i)
    {
        if(d%i == 0) 
            return false; 
    }
    return true; 
}
// tốn độ phức tạp là O(sqrt(d))

/*

Giả sử N D, N/D và D < Sqrt(N) -> X
N -> 16 -> 4 
D = 2 -> X = 8 
*/
bool isPrime2(int d)
{
    for(int i = 2; i*i <= d; i++)
    {
        if(d%i == 0) 
        return false; 
    }
    return true; 
}
int main()
{
    
`   int n = 100;
    for(int i = 2; i <= n; i++)
    {
        int status = true; 

        for(int j = 2; j < i; j++) 
        {
            if(i %j == 0) status = false; 
        }
        if(status == true) 
        {
            // ....
        }
    }

     
    bool isPrime[n + 10]; 
    for(int i=2; i<=n; i++) 
        isPrime[i] = true; 
    // O(n.log2(n)) 
    for(int i = 2; i*i <= n; ++i)
    {
        if(isPrime[i]==true) // số đang xét là số nguyên tố 
        {
            for(int j = i*i; j <= n; j += i)
            {
                isPrime[j] = false; 
            }
        }
    }
   
    vector <int> p; 
    for(int i = 2; i <= n; ++i)
        if(isPrime[i] == true) 
           p.push_back(i); 
    

    return 0; 
}