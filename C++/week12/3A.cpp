#include <bits/stdc++.h>
using namespace std;

/*
Bài 3: Nhập vào một ma trận (mảng 2 chiều) có kích thước (MxN) và thực hiện các thao tác sau:

- Xóa một hàng ở vị trí bất kỳ.

- Thêm một hàng ở vị trí bất kỳ.

- Hoán đổi vị trí 2 hàng nằm cạnh nhau

- Xóa đi một cột nằm ở vị trí bất kỳ

- Thêm một cột vào vị trí bất kỳ.

- Hoán đổi vị trí 2 cột nằm cạnh nhau

*/
int a[1000][1000], m , n; 
int insRow[1000], insCol[1000];
void nhap()
{
    freopen("input.txt","r",stdin); 
    cin >> m >> n;
    for(int i=0; i<m; i++) 
        for(int j=0; j<n; j++) 
            cin >> a[i][j]; 
}

void xuat()
{
    for(int i=0; i<m; i++) 
    {
        for(int j=0; j<n; j++) 
            cout << a[i][j]<<" "; 
        cout << endl; 
    }
    cout << "\n"; 
}
// del col and row
void delRow(int pos)
{
    if(pos >=0 && pos <m)
    {
        for(int i=0; i<n;i++)
            a[pos][i] = a[pos+1][i]; 
        m--; 
    }
    else
        cout <<"error: the index not match!\n";
}
void delCol(int pos)
{
    if(pos >=0 && pos <n)
    {
        for(int i=0; i<m;i++)
            a[i][pos] = a[i][pos+1]; 
        n--; 
    }
    else
        cout <<"error: the index not match!\n";
}

// swap col and row

void swapRow(int pos1, int pos2)
{   // pos1 and pos2 la vi tri 2 hang can swap 
    if(pos1 >=0 && pos1 <m && pos2 >=0 && pos2 <m)
    {
        for(int i=0; i<n;i++)
            swap(a[pos1][i],a[pos2][i]);  
    }
    else
        cout <<"error: the index not match!\n";
}
void swapCol(int pos1 , int pos2)
{   // pos1 and pos2 la vi tri cot can swap 
    if(pos1 >=0 && pos1 <n && pos2 >=0 && pos2 <n)
    {
        for(int i=0; i<m;i++)
            swap(a[i][pos1],a[i][pos2]);  
    }
    else
        cout <<"error: the index not match!\n";
}
// add col and row 
void addRow(int pos , int insRow[])
{   // chen them hang vi tri pos 
    if(pos >=0 && pos <=m)
    {
        for(int i = m; i >pos; i--)
        {
            for(int j=0; j< n; j++)
                a[i][j] = a[i-1][j]; 
        }
        for(int i=0; i<n; i++) 
            a[pos][i] = insRow[i]; 
        m++; 
    }
    else
        cout <<"error: the index not match!\n";
}
void addCol(int pos , int insCol[])
{   // chen them cot vi tri pos 
    if(pos >=0 && pos <=n)
    {
        for(int i = n; i >pos; i--)
        {
            for(int j=0; j< m; j++)
                a[j][i] = a[j][i-1]; 
        }
        for(int i=0; i<m; i++) 
            a[i][pos] = insCol[i]; 
        n++; 
    }
    else
        cout <<"error: the index not match!\n";
}

int main() {   
	//ios_base::sync_with_stdio(0); cin.tie(0);    
    nhap(); 
    //delCol(1);
    //delRow(-1);
    //swapCol(1,2);
    //swapRow(1,2);  
     
    for(int i=0; i<n; i++) 
        cin >> insRow[i]; 

    for(int i=0; i<=m; i++) 
        cin >> insCol[i]; 
    addRow(0,insRow); 
    addCol(0,insCol); 
    xuat();

    
    


    cout << "\n\n"; 
    return 0;
}
