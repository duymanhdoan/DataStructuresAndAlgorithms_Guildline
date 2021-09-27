#include <bits/stdc++.h> 
using namespace std; 

struct toado{ 
    int x; 
    int y; 
    bool status; 
}; 

bool cmp (toado a, toado b) { 
    return (a.y > b.y ); 
}

int main()
{
   // freopen("input.txt","r",stdin); 
   vector <toado> arrPoint; 

    int n = 5; 
    for(int i =0; i<5; i++)
    {
        toado tmp; 
        cin >> tmp.x >> tmp.y; 
        arrPoint.push_back(tmp); 
    }
    cout << "hien thi 5 toa do vua nhap\n";
    for(int i=0; i<n; i++)
    {
        cout << arrPoint[i].x << " " << arrPoint[i].y << endl; 
    }
    sort(arrPoint.begin(),arrPoint.end(), cmp); 
    cout << "\n sau khi sap xep\n";
    for(int i=0; i<n; i++)
    {
        cout << arrPoint[i].x << " " << arrPoint[i].y << endl; 
    }
    return 0; 
}