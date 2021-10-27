#include <bits/stdc++.h> 
using namespace std; 

bool calc(int m)
{
    if (m==1) return 0; 
    int sum = 1; 
    for(int i = 2; i*i <= m; ++i) 
    {
        if(m%i==0) 
        {
            sum += i;  
            if(m/i != i) sum += m/i; 
        }
    }
    // cout << sum << " " << m << endl; 
    return (sum > m);  
}

int main()
{
    int L, R, cnt = 0; 
    scanf("%d%d",&L,&R); 
    for(int i = L; i <= R; ++i) 
    {
        if(calc(i)==true) cnt++;  
    }
    printf("%d\n",cnt);  
    return 0; 
}