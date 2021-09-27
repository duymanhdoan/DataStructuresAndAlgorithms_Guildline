#include <bits/stdc++.h> 
using namespace std; 

int main()
{
   // freopen("input.txt","r",stdin); 
    int n, m; 
    cin >> n >> m; 
    vector < vector <int> > data (n+1);
    int distance[n+1][m+1];  
    for(int i = 1; i <= m; i++)
    {
        int a , b , x; 
        cin >> a >> b >> x; 
        data[a].push_back(b); 
        data[b].push_back(a);
        distance[a][b] = distance[b][a] = x;  
    }
    cout << "\nCau4A: \n";
    for(int i =1; i<=n; i++)
    {
        cout << i << " --> ("; 
        for(int j=0; j<data[i].size(); j++) 
            cout << data[i][j] << ", "; 
        cout <<")"<<endl; 
    }
    cout << "\nCau4B: \n"; 
    for(int i =1; i<=n; i++)
    {
        cout << "Khoang canh tu thanh pho "<<i<<" den \n";
        for(int j=0; j<data[i].size(); j++) 
             cout << "Thanh pho " << data[i][j] << " la: " << distance[i][data[i][j]] << endl;   
        cout << endl; 
    }

    return 0; 
}