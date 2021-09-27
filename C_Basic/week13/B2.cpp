#include <bits/stdc++.h> 
using namespace std; 
const int maxn = 100; 

void printArr(vector <vector <int> > data, int n, int m)
{
    cout << "\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << data[i][j] <<  " "; 
        }
        cout << endl; 
    }
}

void calc(vector <vector <int> > A, vector <vector <int> > B, vector <vector <int> > &C, int n, int m)
{ 
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            C[i].push_back( A[i][j] + B[i][j] );
}

int main()
{
   // freopen("input.txt","r",stdin); 
    vector < vector <int>  > A(maxn), B(maxn), C(maxn); 

    int n ,m ; 
    cin >> n >> m; 
    for(int i = 0; i<n; i++) 
    for(int j = 0; j< m; j++)
    {
        int tmp; 
        cin >> tmp; 
        A[i].push_back(tmp); 
        B[i].push_back(tmp); 
    }
   
    calc(A,B,C,n,m);
    printArr(C,n,m); 
    return 0; 
}