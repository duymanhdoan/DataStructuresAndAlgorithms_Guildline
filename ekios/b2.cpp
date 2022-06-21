#include <bits/stdc++.h> 
using namespace std; 

bool checkPrime(long long prime)
{
    for(int i=2; i<sqrt(prime); ++i)
        if(prime%i==0) 
            return false;
    return true; 
}
int main()
{
    long long prime; cin >> prime; 
    cout << checkPrime(prime) << endl; 
    return 0; 
}