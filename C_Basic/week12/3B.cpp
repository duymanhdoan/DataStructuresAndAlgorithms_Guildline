#include <bits/stdc++.h>
using namespace std;

/*
Bài 4: Cho mảng 1 chiều có độ dài n ( n>5). 
Dòng tiếp theo nhập n số nguyên là các phần tử của mảng. 
Dòng thứ 3 nhập một số T, sau đó T dòng, mỗi dòng ứng mới một truy vấn. 
Mỗi truy vấn sẽ bao gồm 2 số l và r. 
Nhiệm vụ của bạn là tính tổng trọng đoạn l đến

*/
void solve() {
    int n; cin >> n; 
    vector <long long> A(n); 

    for(int i=0; i<n; i++)
        cin >> A[i]; 
    
    sort(A.begin(),A.end()); 
    
    long double sum1 = 0, sum2 = 0; 
    for(int i=0; i<n; i++) 
        sum2 += A[i]; 
    
    long double ans = -1e18; 
    
    for(int i=0; i<n-1; i++){
        sum2 -= A[i]; 
        sum1 += A[i]; 
        if(ans <  sum1 /(i+1) + sum2 / (n-i-1))
            ans =  sum1 /(i+1) + sum2 / (n-i-1); 
    }
    // cout <<;
    cout <<  setprecision(20)<< ans << endl; 
}
 
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);    
    freopen("input.txt","r",stdin); 
    int T = 1;
    cin >> T;
    while(T--) {
        solve();
    }
 
	return 0;
}