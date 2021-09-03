#include <bits/stdc++.h>
using namespace std;
 
int a[100000]; 
 /* Hàm thực hiện giải thuật quick sort */
void quicksort(int left, int right)
{
    int i=left,j=right;
    int mid=a[(left+right)/2];
     /* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
         và là phần tử chia mảng làm 2 mảng con trái & phải */
   // cout<<left<<" "<<right<<" "<<mid<<endl;
    while(i<=j)
    {
        while(a[i]<mid)
            i++;
        while(a[j]>mid)
            j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
     // Gọi đệ quy sắp xếp 2 mảng con trái và phải
    if(i<right)
        quicksort(i,right);
    if(j>left)
        quicksort(left,j);
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

    quicksort(0,n-1); 
    
    printArray(a,n); 
    cout << "\n\n"; 
	return 0;
}
