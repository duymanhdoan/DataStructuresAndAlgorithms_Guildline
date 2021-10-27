#include <bits/stdc++.h>
#include <vector> 
using namespace std;
// khai bao vector 1D.
vector <int> first; 

// tao vector với 4 phần tử là 100 
vector <int> second (4,100); 

// sap chep du lieu tu vector second sang third 
vector <int> third(second.begin(),second.end()); 

/// khai bao vector 2D. 

vector < vector<int> > v (10); 
 

// các hàm thành viên của vector. 
/*
size() độ dài của vector. O(1)
push_back(): chèn 1 phần tử vào cuối vector. O(1)
pop_back(): loại bỏ phần tử ở cuối vector. O(1)  
front() : trả về giá trị của phần tử đầu tiên O(1) 
back() : trả về giá trị phần tử cúô cùng O(1)
v.erase(1) xóa 1 phần tử trong vector O(n) 

*/

// khai báo struct 
struct toado{
    int x;
    int y;
}; 
toado A; 

// sắp xếp theo tọa độ. 
bool cmp (int i , int j) { return (i > j); }

// struct mycmp {
//   bool operator() (int i,int j) { return (i > j);}
// } myobject;

int main() {   
    
    vector <int> oneDim; 
    vector <int> :: iterator it; 
    vector <int> :: reverse_iterator rit; 

    for(int i=0; i<10; i++) oneDim.push_back(i); 
    vector <int> u(oneDim.begin(),oneDim.end()); 
    // hiển thị vector theo 2 cách. 
    // hiển thị theo chỉ mục 
    for(int i=0; i< oneDim.size(); i++) cout << oneDim[i] <<" "; 
    cout << endl; 
    // hiển thị theo cách số 2. 
    for( it = oneDim.begin(); it!= oneDim.end(); it++) 
        cout << *it <<" "; 
    cout << endl; 
    // hiển thị theo chiều ngược. 
    for(rit = oneDim.rbegin(); rit!= oneDim.rend(); rit++) 
        cout << *rit <<" "; 
    cout << endl; 
    // sắp xếp  dùng hàm có sẵn. 
    
    sort(oneDim.begin(),oneDim.end()); 
    
    reverse(oneDim.begin(),oneDim.end()); // đảo ngược
    cout << "sort dùng hàm compare để so sánh" << endl;
    sort(u.begin(),u.end(),cmp); 
    for(int i=0; i< u.size(); i++) cout << u[i] <<" "; 
    cout << endl;
    // khai báo vector 2D tối đa là 10 dòng. 
    vector < vector<int> > twoDim (10); 
    
    for(int i = 0; i<5; i++) 
        for(int j=1; j<=10; j++) 
            twoDim[i].push_back(j); 

    // hiển thị vector 2D. có kích thước 5x10. 
    for(int i=0; i<5; i++ )
    {
        for(int j=0; twoDim[j].size(); j++) 
        {
            cout << twoDim[i][j] <<" "; 
        }
        cout << endl; 
    }
    cout << "\n\n";
    return 0;
}
