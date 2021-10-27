#include <bits/stdc++.h>
using namespace std;

/*
Bài 4: Cho mảng 1 chiều có độ dài n ( n>5). 
Dòng tiếp theo nhập n số nguyên là các phần tử của mảng. 
Dòng thứ 3 nhập một số T, sau đó T dòng, mỗi dòng ứng mới một truy vấn. 
Mỗi truy vấn sẽ bao gồm 2 số l và r. 
Nhiệm vụ của bạn là tính tổng trọng đoạn l đến

*/
int n, a[1000],sum[1000], T, l,r; 
int main() {   
	//ios_base::sync_with_stdio(0); cin.tie(0);    
    freopen("input.txt","r",stdin);
    cin >> n; 
    for(int i=0; i<n; i++) 
        cin >> a[i]; 

    for(int i=1; i<=n; i++)
        sum[i] += a[i-1] + sum[i-1];  
    cin >> T;
    while(T--)
    {
        cin >> l >> r; 
        cout << sum[r+1] - sum[l] << endl; 
    }
    
    cout << "\n\n"; 
    return 0;
}
