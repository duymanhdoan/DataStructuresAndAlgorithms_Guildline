#include <bits/stdc++.h> 
using namespace std;

// tìm kiếm nhị phân cơ bản
int binarySearch(int a[], int n, int target)
{
    int lo = 0, hi = n - 1; 
    while(lo <= hi)
    {
        int m = (lo + hi)/2; 
        if(a[m] == target)
            return m; 
        else if( target > a[m]) 
            lo = m + 1; 
        else 
            hi = m - 1;  
    }
    return -1; 
}

//Tìm kiếm nhị phân dạng 1.
// tìm x nhỏ nhất mà P(x) == true 
bool P(int x) {
    // Logic của hàm P ở đây
    return true;  // thay giá trị này bằng giá trị đúng logic.
}

int binary_search(int lo, int hi) {
    while (lo < hi) {
        int mid = lo + (hi-lo)/2;
        if (P(mid) == true)
            hi = mid;
        else
            lo = mid+1;
    }
  	
    if (P(lo) == false)
        return -1; // P(x) = false với mọi x thuộc S, bài toán vô nghiệm.
  	
   return lo; // lo là giá trị x nhỏ nhất mà P(x) = true
}
//Tìm kiếm nhị phân dạng 2.
// tim x lớn nhất mà P(x) = false 
bool P(int x) {
    // Logic của hàm P ở đây
    return true;  // thay giá trị này bằng giá trị đúng logic.
}

int binary_search(int lo, int hi) {
    while (lo < hi) {
        int mid = lo + (hi-lo+1)/2;
        if (P(mid) == true)
            hi = mid - 1;
        else
            lo = mid;
    }
  	
    if (P(lo) == true)
        return -1; // P(x) = true với mọi x thuộc S, bài toán vô nghiệm.
  	
   return lo; // lo là giá trị x lớn nhất mà P(x) = false
}


int main()
{
    int n = 10, k = 5; 
    int a[] = {1 , 2, 3, 5, 5, 5, 5, 5, 6, 10}; 
    return 0; 
}