#include <bits/stdc++.h>
#include <vector> 
#include <map> 
using namespace std;
int n , m;
/*
map 
- có key, value . 
- key: các phần tử key không trùng nhau. 
- tự động sắp xếp tăng dần or giảm dần.  
// set 


// stack 

// queue

*/

/*

            set <int, cmp> s; 
    int a[] = {1,2,2,4,1,5,10,7,9,-1}; 
    int n = 10;
    for(int i=0; i<n; i++) s.insert(a[i]); 
    for(set <int> ::iterator it =s.begin(); it!=s.end(); it++) 
        cout << *it << endl; 
 

*/
struct cmp {
    bool operator() (int x, int y) 
     {
         return x > y;
     }
};

int main()
{
   // freopen("input.txt","r",stdin); 
    // them dữ liệu vào map, cách 1. 
    map <int ,int > m; 

    int a[] = {1,2,2,4,1,5,10,7,9,-1}; 
    int n = 10; 
    for(int i =0 ; i <n; i++)
    {
        m.insert(make_pair(a[i],0)); 
    }

    for(map<int,int>:: iterator it=m.begin(); it!=m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl; 
    }
    cout << endl; 
    // them dữ liệu vào map, cách 2.
    
    map <int ,int,cmp > m1; 

    for(int i =0 ; i <n; i++)
    {
        m1[a[i]] ++;  
    }
    for(map<int,int>:: iterator it=m1.begin(); it!=m1.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl; 
    }

    cout << "\n kich thuoc hien tai cua map: " << m1.size()<<endl; 
    m1.erase(-1); 
    cout << "\n kich thuoc hien tai cua map sau khi xoa: " << m1.size();  
    cout << "\n tim phan tu -5 trong map\n";
    if(m1.find(-5) != m1.end())
    {
        cout << " tim thay \n"; 
    }
    else 
        cout << "khong tim thay \n";

  
    cout <<"\n\n\n";
    // lý thuyết về set 
    set <int> s; 
    for(int i=0; i<n; i++) 
    {
        s.insert(a[i]); 
    }
    // duyệt set. 
    cout << "hiển thị các phần tử trong set \n"; 
    for(set<int> ::iterator it = s.begin(); it!=s.end(); it++)
    {
        cout << (*it) << " "; 
    }
    cout << endl; 
    cout << "độ dài của set là: " << s.size() << "\n"; 
    cout << "tìm phần tử 2 trong set \n"; 
    if(s.count(2)==1)
        cout << "tìm thấy 2"; 
    else 
        cout << "không tìm thấy 2"; 
    cout << "\nđịnh nghĩa lại set lưu dãy giảm dần\n"; 

    set <int, cmp> s1; 
    for(int i=0; i<n; i++) 
    {
        s1.insert(a[i]); 
    }
    // duyệt set. 
    cout << "hiển thị các phần tử trong set đã định nghĩa lại \n"; 
    for(set<int> ::iterator it = s1.begin(); it!=s1.end(); it++)
    {
        cout << (*it) << " "; 
    }
    cout << endl; 
    cout << "\n\n\n";
    return 0; 
}