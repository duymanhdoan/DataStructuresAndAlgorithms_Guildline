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

/*
Array 1D: 
    Sắp xếp 

    Tìm Kiếm 

    Sửa 

    chèn 
    
    Xóa 

Function 
    Hàm có giá trị trả về. 

    Hàm không có giá trị trả về. 
    
*/ 
// tham trị 
// tham chiếu pass by reference 

int a[1000], n; 

void xuatmang(int a[], int n)
{
    for(int i=0; i<n; i++) 
        cout << a[i] << " "; 
    cout << endl; 
}

void insert (int a[], int &x, int val, int pos)
{

    for(int i = x; i>pos; i--)
    {
        a[i] = a[i-1]; 
    }
    a[pos] = val; 
    x++; 
    cout << " xuat mang trong ham insert\n";
    xuatmang(a,x); 
    cout <<" do dai trong ham insert x = "<< x << endl; 
 }
 /*
void insert

void remove 

void update 

void sort 

void search 

-> code lai 5 ham (sx, them, sua, xoa, chen); 
thao thac 5 ham.  

-> on tham chieu, tham tri. 
https://codelearn.io/sharing/tham-chieu-va-tham-tri-trong-cpp
*/ 
 main(){
   
    freopen("input.txt","r",stdin); 
    // nhap mang
 
    cin >> n; 
    for(int i=0; i<n; i++)
    {
        cin >> a[i]; 
    }
    // chen
    int val = -10, pos = 3; 
    insert(a, n, val, pos);   

    cout << "\ndo dai cua n trong main la n = " << n << "\n"; 
    cout <<"xuat mang ham main\n";
    xuatmang(a,n); 
    cout <<"\n\n\n"; 
    return 0;
}