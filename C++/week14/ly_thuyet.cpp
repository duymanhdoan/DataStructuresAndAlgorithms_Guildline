#include <bits/stdc++.h> 
#include <string.h> 
using namespace std; 

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001; //check the limits, dummy
/*
Khai báo
    ngôn ngữ C có char;
    ngôn ngữ C++ có string thư viện <string.h> 
    string name_string; 
    string name1 = "sakdjfksajfdjsaf sdkajfdsa"; 
    string s; 
    cin >> s; 
    nhập chuỗi có dấu cách sử dụng getline 
    getline(cin,s); 
Toán Tử so sánh: < , > , <= , >= , == , != 
    tư tưởng phép so sánh trong chuỗi
        + theo bảng mã ascii   (độ lớn của từng kí tự)
        + thứ tự từ trái sang phải. 
        + theo độ dài
Phép convert từ ký tự in thường sang in hoa và ngược lại 
    + char x = 'a'; 
    chuyển in thường -> in hoa
    x = x - 32; ('a' ->'A' với a = 97 và A = 65)
    chuyển từ ký tự sang số nguyên 
    48. 
    char x = '1'; 
    int p = x - 48; 

Hàm thành viên của string giống như vector 
    size() , length() -> độ dài của chuỗi 
    front() , back() -> trả về ký tự đầu và cuối 
    empty() -> kiểm tra chuỗi có rỗng 
    begin(), end() -> trả về con trỏ đầu, cuối. 
    string v1, v2; 
        + v1.swap(v2); 
        + swap(v1,v2); 
Hàm công string 
    tư tưởng là copy chuỗi b vào cuối của chuỗi a
    a = "abc"
    b = "def"
    a + b = "abcdef" 
Các phường thức chèn, xóa, cắt chuỗi con. 
    cắt  chuỗi : s.substr(pos_begin,pos_end)  -> s là chuỗi gốc 
    chèn chuỗi con: s.insert(pos_insert,substring); s là chuỗi gốc. 
    xóa chuỗi : s.erase(pos_erase, len_of_digit); -> 
    timf kiếm: s.find("hang rao",pos_search); s.find('c',pos_search);
    thay thế: s.replace(pos_begin, len_of_substring_replace , substring);
Thuật toán về string phép đếm, phép tìm kiếm, bài toán về lặp, game. 

*/


int main()
{
    string s = "con meohay qua hang rao";
    string s1 = "meo";
    // cout << s.substr(0,7) << endl;
    // s.insert(7,s1); 
    // s.erase(0, 7);
    // cout << s.find("hang rao",0) << endl; 
    // cout << s.rfind("hang rao");
    // s.replace(pos, nchar, s1)
    s.replace(4,5, s1); 
    cout << s ;
    cout << nl << nl << nl; 

    /* 
    nhập vào một chuỗi s = "aaabbccaacbbe";  
    string s; cin>>s; 
    yêu 
    */ 

    return 0; 
}

