#include <bits/stdc++.h>
using namespace std;
// ma tran nghic dao. 
 
int a[100][100], m, n;
 
void inMaTran(){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout << a[i][j] <<" "; 
        cout << endl; 
    }
}
  
void taoMaTranXoanOc(){
    int d = 0, i, gt = 1;
    int hang = m - 1, cot = n - 1;
    while(gt <= m*n){        
        for(i = d; i <= cot; i++) {          
            a[d][i] = gt++; // gan tu trai sang phai            
        }       
        for(i = d+1; i <= hang; i++){            
            a[i][cot] = gt++; // gan tu tren xuong duoi
        }       
        for(i = cot-1; i>=d && gt <= m * n; i--){         
            a[hang][i]=gt++; // tu phai sang trai
        }       
        for(i = hang-1; i>d && gt <= m * n; i--){         
            a[i][d] = gt++; // tu duoi len  
        }       
        d++; hang--; cot--;     // thu nho xoan oc      
    }
    inMaTran();
}
main(){ 
    freopen("input.txt","r",stdin); 
    cin >> m >> n; 
    taoMaTranXoanOc();  
    cout << "\n\n";
    return 0; 
}