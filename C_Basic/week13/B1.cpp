#include <bits/stdc++.h>
#include <vector> 
using namespace std;


int main() {    
    vector <int> a; 
    int n; 
    cin >> n; 
    for (int i=0; i<n; i++) 
    {
        int x; cin >> x; 
        a.push_back(x); 
    }
   cout << " duyet theo chi so\n"; 
    for(int i=0; i<a.size(); i++) 
    {
        cout << a[i] << " "; 
    }
    cout << "\nduyet theo interator\n"; 

    for(vector <int> ::iterator it = a.begin(); it!=a.end(); it++) 
        cout << *it << " "; 
    cout << "\nduyet theo interator nguoc \n"; 
    for(vector <int> ::reverse_iterator rit =a.rbegin(); rit!=a.rend(); rit++)
        cout << *rit <<" "; 
    cout << endl;
    

    return 0;
}
