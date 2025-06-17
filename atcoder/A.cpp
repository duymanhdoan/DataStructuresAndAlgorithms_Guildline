#include <bits/stdc++.h>
using namespace std;

int main() {   
	
    int x, y; 
    cin >> x >> y; 
    int among = abs(x - y); 
    string result = ""; 
    if( y > x) 
    { 
        result = among%2 == 0?"Yes": "No"; 
    }
    else 
    {
        result = among%3 == 0?"Yes": "No"; 
    }
    cout << result; 
    return 0; 
}
