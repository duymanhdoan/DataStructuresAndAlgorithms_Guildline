#include <bits/stdc++.h>
using namespace std;
 
int a[100000]; 

/* Hàm trộn - merge
 start - chỉ số bắt đầu mảng
 mid - chỉ số giữa, chia đôi mảng
*/ 
void merge(int a[], int start, int mid, int end){
    int n1 = mid - start + 1; // Số phần tử mảng con trái 
                                    // + 1 là do lưu thêm phần tử ở vị trí mid
    int n2= end-mid;          // Số phần tử mảng con phải
    int left[n1]; int right[n2];  // Khai báo hai mảng trung gian
    cout << n1 << " " << n2 << endl; 
    // Copy giữ liệu từ mảng chính ra hai mảng con
    for(int x=0; x<n1; x++) left[x] = a[start+x]; 
    for(int y=0; y<n2; y++) right[y] = a[mid+1+y];
    
    int i=0, j=0;     // Khai báo hai biến chạy để duyệt mảng con
    int k=start;     // Lưu k làm vị trí bắt đầu của mảng chính,
    while(i<n1 && j<n2){    // Trong khi cả hai mảng con chưa hết phần tử
        if(left[i]>=right[j]){   // Nếu phần tử mảng con trái >= mảng con phải
            a[k]=right[j];   // Điển phần tử mảng con phải vào mảng chính
            j++;             // xét phần tử tiếp theo của mảng right
        }
        else{               // Ngược lại tức là left[i] < right[j]
            a[k]=left[i];
            i++;
        }
        k++;              // Tăng index của mảng chính, mỗi lần lặp sẽ tìm được 1 phần tử thích hợp
    }
        // Sau vòng lặp trên, 1 trong 2 mảng đã duyệt hết phần tử, hoặc cả hai cùng hết
    while(j<n2){      // Nếu mảng right chưa hết, mảng left đã hết
        a[k]=right[j]; // Cho toàn bộ các phần tử còn lại vào mảng chính
        k++;
        j++;    
    }
    while(i<n1){     // Nếu mảng left chưa hết, mảng right hết
        a[k]= left[i];
        k++;
        i++;    
    }
}

// MergeSort
void mergeSort(int a[], int left, int right){
    int mid;    //  biến để lưu vị trí chia đôi mảng
    if(left<right){              // Nếu mảng còn ít nhất 1 phần tử
        mid =(left+right)/2;    // Chia đôi mảng
        mergeSort(a,left,mid);   // Đệ quy mảng trái
        mergeSort(a,mid + 1,right);   // Đệ quy mảng phải
        merge(a,left, mid ,right);   // Trộn hai mảng lại
    }
    else    // Mảng < 1 phần tử sẽ dừng đệ quy
        return;
}

/* Hàm xuất mảng */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {   
	ios_base::sync_with_stdio(0); cin.tie(0);    
    int n; 
    freopen("input.txt","r",stdin); 
    cin >> n; 
    for(int i=0; i<n; i++) cin >> a[i]; 

    mergeSort(a,0,n-1); 
    for(int i=0; i<n; i++) 
    cout << a[i] << " "; 

    cout << "\n\n"; 
	return 0;
}
