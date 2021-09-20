#include <bits/stdc++.h>
using namespace std;
// ma tran nghic dao. 

int m, n , a[1000][1000];
bool valid[1000][1000]; 
void nhap()
{
    freopen("input.txt","r",stdin); 
    cin >> m >> n;
    for(int i=0; i<m; i++) 
        for(int j=0; j<n; j++) 
            cin >> a[i][j]; 
}

void xuat()
{
    for(int i=0; i<m; i++) 
    {
        for(int j=0; j<n; j++) 
            cout << a[i][j]<<" "; 
        cout << endl; 
    }
    cout << "\n"; 
}

int main() {   
	//ios_base::sync_with_stdio(0); cin.tie(0);    
    nhap(); 
    xuat(); 
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            if(!valid[i][j] || !valid[j][j]) 
            {
                swap(a[i][j],a[j][i]); 
                valid[i][j] = 1, valid[j][i] = 1; 
            }
            
    swap(n,m); 
    xuat();        
    cout << "\n\n"; 
    return 0;
}
