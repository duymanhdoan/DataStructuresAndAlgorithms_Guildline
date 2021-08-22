#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
 
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
 
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
 
const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001; //check the limits, dummy


unsigned long long int MAX_ULLI = ULLONG_MAX; // 2e64 - 1
unsigned long long int MIN_ULLI = 0; 

int MAX_I = INT_MAX; // 2e31
int MIN_I = INT_MIN; // 2e31 - 1

long long MAX_LL = LLONG_MAX; // 2e63
long long MIN_LL = LLONG_MIN; // 2e63 - 1. 

unsigned int MAX_UI = INT_MAX; 
const int PI = 3.141428; 
const int e = 2.8182; 
const int sqrt_2 = 1.4142; 
float f = 4.565436543; 
int a[100000]; 

int main() {   
	ios_base::sync_with_stdio(0); cin.tie(0);    
    for(int x = 0, y = 1; x < 10 || y%2==0; x++, y++)
    {
        cout << x << " " << y << endl; 
    }    

    cout << "\n\n"; 
	return 0;
}
/*
Input - Output. 
        cin và count : >> và <<
        \t = 1 tab 
        \n, endl = xuống dòng. 
        scanf -> nhap 
        prinf -> xuat
        setw(5) -> hiển thị độ rộng của biến 5 ký tự. 
        setprecision(5) -> hiện thị 5 số sau dấu phẩy.
        Khối lệnh: {} 
        freopen("input.txt","r",stdin); 
        freopen("output.txt","w",stdout);

ký tự commenet code "//"

/* 
I. Khai báo biến . 
   -  Biến (Variables)
        int  + name_var. 
        int  + name_var = value; 
        int -> 32 bit 
        long long -> 64 bit. 
    - Hằng số. 
        const  + kieu_DL = Value; 
        PI_ = 3.14142. 
        E = 2.8182....
    - Phạm vi của biến: 
        local variable 
            - biến chỉ có phạm vị trong khối lệnh hoặc trong vòng lặp nhất định
        global variable. 
            - Biến có phạm vi toàn chương trình. 
            - Ưu điểm: khi khởi tạo biến có giá trị = 0 và có phạm vi truy cập 
                toàn bộ, giúp việc sử dụng biến dễ dàng 
            - Nhược điểm: việc khai báo toàn cục làm giá trị của biến thay đổi 
                trong quá trình sử dụng ảnh hưởng đến giá trị. Phạm vi truy cập 
                ko đảm bảo tính đóng gói. 
        khối lệnh
            - khối lệnh được quyết định bởi dấu ngoặc {} hoặc trong phạm vi gần
                nhất của ảnh hưởng lên nó của vòng lặp. 
II. Các phép toán cơ bản
    toán tử 
        - một ngôi : ++, !, Sin, cos , abs, - 
        - hai ngôi : + , - , * , /, %th
    toán tử gán: 
        - biến được gán luôn nằm bên trái. 
        a = 5; 
        a += 5; 
    toán từ so sánh > , < , >= , <= , == , !=. 

    Toán tử tăng : 
        int x = 5; 
        int y = 6; 
        ++ x , x ++; 
        -- y , y --; 
    
    
    ngoài ra : pow, abs, sin, cos, epx ... 
    
III. Cấu trúc so sánh. 
    expression ? do A : do B;

    if , else, if else. 
    
        if (color == 1)
            cout << "You like BLACK color" << endl;
        else if (color == 2)
            cout << "You like BLUE color" << endl;
        else if (color == 3)
            cout << "You like GREEN color" << endl;
        else if (color == 4)
            cout << "You like YELLOW color" << endl;
        else if (color == 5)
            cout << "You like WHITE color" << endl;
        else
            cout << "Unknown" << endl;
    Swith case statements 
        switch (color)
        {
            case 1:
                cout << "You like BLACK color" << endl;
                break;
            case 2:
                cout << "You like BLUE color" << endl;
                break;
            case 3:
                cout << "You like GREEN color" << endl;
                break;
            case 4:
                cout << "You like YELLOW color" << endl;
                break;
            case 5:
                cout << "You like WHITE color" << endl;
                break;
            default:
                cout << "Unknown" << endl;
                break;
        }

IV Vòng lăp 
    break và continue. 
    int a[] = {5, 4, 5, 2, 5}
    for(int i = 0; i < 5; i ++) 
    {

    }
    for each 
    for (int item: a)
    {
        cout << item << " "; 
    }
    int i = 0;
    for( ; ; i ++)
    {
        if( i == 5) break; 
    }

    int x = 5;
    while (x--)
    {

    }

    while(true)
    {
        if(x == 0) break;   
        x --; 
    }

    do
    {
        câu lệnh; 
    }while (<điều kiện>); 



V. Mảng (Array )
    Mảng 1D. 
        Khai báo mảng. 
            khai báo cơ bản. 
                int a[100]; 
            khai báo + truyền giá trị cho mảng. 
                int b[] = {1, 2, 3, 4, 5}; 
            tính giá trị độ dài của mảng. 
                int size_b = sizeof(b) / sizeof(b[0]); 

                float d_values[] = { 2.08, 1.32, 6, 4.1, 12, 999.99 };
                int size_value = sizeof(d_values) / sizeof(double)

            int arr[10]; // khởi tạo mảng cấp phát 10 ô nhớ 
            int n; khai báo và nhập giá trị độ dài của mảng đảm bảo nhỏ hơn 10. 
            cin >> n; 
            // nhập từng giá trị cho phần tử của mảng. 
            for(int index = 0; index <= 9; index++)	{
                cin >> arr[index];
            }
        
        Thao thác với mảng 1 chiều. 
            - tìm kiếm
            
            - chèn 

            - xóa 

            - sửa 

            - sắp xếp 
    Mảng 2D. 
*/
