# I. Prime Numbers (Số nguyên tố)
---
- Prime Numbers (số nguyên tố) là số chỉ chia hết cho 1 và chính nó -- có 2 ước. 
- Composite numbers (hợp số) là số nguyên lớn hơn 1 và có nhiều hơn 2 ước. 
- Các hợp số được tạo thành từ các số nguyên tố.
- Số 2 là số nguyên tố chẵn duy nhất. 
- Số  nguyên tố  10^9 + 7, phép mod số lớn và ý nghĩa to lớn của nó [ở đây](https://kiendt.me/2017/12/25/10e9-plus-7-modulo/).
- Cở bản số nguyên tố [denify, sieve, Euler's totient funtion  and other](https://www.topcoder.com/thrive/articles/Prime%20Numbers,%20Factorization%20and%20Euler%20Function)

## A. Kiểm tra số nguyên tố

<br> <h3> 1. Thuật toán "Ngây thơ" </h3>  </br>

Ta sẽ duyệt hết tất cả các số từ 1 đến N và đếm số ước của N. Nếu số ước của N là 2 thì N là số nguyên tố, nếu không thì N không là số nguyên tố.
```C++
bool isPrime(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0) {
            // n chia hết cho số khác 1 và chính nó.
            return false;
        }
    return n > 1;
}
```
Độ phức tạp của thuật toán: Độ phức tạp của thuật toán là O(N) do ta phải duyệt hết các số từ 1 đến N.

<br> <h3> 2. Thuật toán tốt hơn </h3>  </br> 
Xét hai số nguyên dương N và D thỏa mãn N chia hết cho D và D nhỏ hơn $\sqrt{N}$. Khi đó N/D phải lớn hơn $\sqrt{N}$. N cũng chia hết cho N/D. Vì thế, nếu N có ước nhỏ hơn sqrt(N) thì N cũng có ước lớn hơn $\sqrt{N}$. Do đó, ta chỉ cần duyệt đến $\sqrt{N}$.

```C++
bool isPrime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return n > 1;
}
```
Độ phức tạp của thuật toán: Độ phức tạp của thuật toán là O($\sqrt{N}$) do ta phải duyệt từ 1 đến $\sqrt{N}$.


<br> <h3> 3. Kiểm tra số nguyên tố  n ( 2 <= n <= 10^18 ) </h3>  </br> 

```C++
typedef long long LL; 

int __gcd(ll x, ll y) { if (y==0) return x; return __gcd(y,x%y);}

ll mpow(ll n, ll p, ll m) {
	if(!p) return 1; 
	else if(p & 1) ((__int128)n * mpow(n, p-1, m)) % m;
	else {
		ll v = mpow(n, p/2, m); 
		return (v*v) % m;
	}
}

bool isprime(ll n){
	if(n<2) return false;
	for(ll i=2;i*i*i <= n; ++i ) if( n%i == 0)  return false;
	for(int it=0;it<1e5;++it){
		ll i = rand()%(n-1) +1;
		if(__gcd(i,n) !=1 ) return false;
		if(mpow(i,n-1,n) !=1 ) return false;
	}
	return true;
}

```
Trong đó rand() returns 64-bit random integer và mpow(a,b,m) là $a^b$ modulo m.

Độ phức tạp của thuật toán: Độ phức tạp của thuật toán là O( max($10^6$,$10^5$. log<sub>2</sub> (k))) Với k là số ước của n.

Tham khảo [codeforces](https://codeforces.com/blog/entry/54396) 
## B. Sàng nguyên tố (Sieve of Eratosthenes)
Sàng Eratosthenes dùng để tìm các số nguyên tố nhỏ hơn hoặc bằng số nguyên N nào đó. Nó còn có thể được sử dụng để kiểm tra một số nguyên nhỏ hơn hoặc bằng N hay không. 

![](https://upload.wikimedia.org/wikipedia/commons/b/b8/Animation_Sieb_des_Eratosthenes_%28vi%29.gif)

Nguyên lí hoạt động của sàng là vào mỗi lần duyệt, ta chọn một số nguyên tố và loại ra khỏi sàng tất cả các bội của số nguyên tố đó mà lớn hơn số đó. Sau khi duyệt xong, các số còn lại trong sàng đều là số nguyên t

- Đánh dấu tất cả các số đều là số nguyên tố.
- Với mỗi số nguyên tố nhỏ hơn $sqrt(N)$
    - Đánh dấu các bội lớn hơn nó là số nguyên tố.


Code sàng nguyên tố: 

```C++
const int N = 10e6;
const int maxn = 10e7 + 5;  
bool isPrime[maxn];
vector <int> p; 
void sieve() {

    for(int i = 0; i <= N;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i) {
         if(isPrime[i] == true) {
             // Mark all the multiples of i as composite numbers
             for(int j = i * i; j <= N; j += i)
                 isPrime[j] = false;
        }
    }
     
    for(int i=2; i<=N; i++) if(isPrime[i]==true) p.push_back(i); 
}
```
Code tối ưu hơn. 
```C++
const int N = 10e6;
const int maxn = 10e7 + 5; 
bool st[maxn];
int primes[maxn], cnt; 

void get_primes()
{
    for (int i = 2; i <= N; i ++ )
    {
    
        if (!st[i]) primes[cnt ++ ] = i;
        for (int j = 0; primes[j] <= N / i; j ++ )
        {    
            st[primes[j] * i] = true;
            if (i % primes[j] == 0) break;
        }
    }
}


```
Code trên được dùng để tìm các số nguyên tố nhỏ hơn hoặc bằng N. Độ phức tạp O(n*log(log(n))) 

Tham khảo [Geeksforgeeks](https://www.geeksforgeeks.org/sieve-of-eratosthenes/)  và [VNOI](https://vnoi.info/wiki/translate/he/Number-Theory-2.md)

## C. Sàng nguyên tố trên đoạn [L,R] 

Đôi khi bạn phải tìm tất cả các số không phải trên đoạn [1;N] mà là trên đoạn [L;R] với R lớn.

Điều kiện sử dụng phương pháp này là bạn có thể tạo mảng độ dài R−L+1 phần tử.

Cài đặt: 
```C++
vector<bool> isPrime(R - L + 1, true);  // x là số nguyên tố khi và chỉ khi isPrime[x - l] == true

for (long long i = 2; i * i <= R; ++i) {
    for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i) {
        isPrime[j - L] = false;
    }
}

if (1 >= L) {  // Xét riêng trường hợp số 1
    isPrime[1 - L] = false;
}

for (long long x = L; x <= R; ++x) {
    if (isPrime[x - L]) {
        // i là số nguyên tố
    }
}

```
Độ phức tạp của thuật toán là O($\sqrt{R}*k$)  với k là hằng số.

## D. Phân tích thừa số nguyên tố  với sàng số nguyên tố 

Đầu tiên hãy xem xét thuật toán phân tích ra thừa số nguyên tố trong O($\sqrt{N} $).

```C++
vector<int> factorize(int n) {
    vector<int> res;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            res.push_back(i);
            n /= i;
        }
    }
    if (n != 1) {
        res.push_back(n);
    }
    return res;
}
```
Tại mỗi bước ta phải tìm số nguyên tố nhỏ nhất mà N chia hết cho số đó. Do đó, ta phải biến đổi sàng Eratosthenes để tìm được số mình mong muốn trong O(1).

```C++
int minPrime[n + 1];
for (int i = 2; i * i <= n; ++i) {
    if (minPrime[i] == 0) { //if i is prime
        for (int j = i * i; j <= n; j += i) {
            if (minPrime[j] == 0) {
                minPrime[j] = i;
            }
        }
    }
}
for (int i = 2; i <= n; ++i) {
    if (minPrime[i] == 0) {
        minPrime[i] = i;
    }
}
```
Bây giờ ta có thể phân tích một số ra thừa số nguyên tố trong O(logN).
```C++
vector<int> factorize(int n) {
    vector<int> res;
    while (n != 1) {
        res.push_back(minPrime[n]);
        n /= minPrime[n];
    }
    return res;
}
```
- Điều kiện sử dụng phương pháp này là ta phải tạo được mảng có độ dài N phần tử.
- Phương pháp này rất hữu ích khi ta phải phân tich nhiều số nhỏ ra thừa số nguyên tố. Ta không cần thiết phải sử dụng phương pháp này trong mọi bài toán liên quan đến phân tích một số ra thừa số nguyên tố. Ngoài ra, ta không thể sử dụng phương pháp này nếu N bằng $10^9$ hay $10^12$. Khi đó, ta chỉ có thể sử dụng thuật toán O($\sqrt{N}$).
- Tính chất thú vị: Nếu $N = p_1^{q1}.p_2^{q2}…p_k^{qk} với p_1,p_2,…,p_k$ là các số nguyên tố thì N có $(q_1+1).(q_2+1)…(q_k+1)$ ước phân biệt.

## E. Đồng nguyên tố  (coPrime) 
 Hai số gọi là đồng nguyên tố nếu ước số chung lớn nhất của hai số đó __gcd(a,b) = 1. 
```python
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def coprime(a, b):
    return gcd(a, b) == 1

print(coprime(14,15)) #Should be true
print(coprime(14,28)) #Should be false
```


Tham khảo: [stack overflow](https://stackoverflow.com/questions/39678984/efficiently-check-if-two-numbers-are-co-primes-relatively-primes/39679114#39679114)

## F. Đếm số nguyên tố (Counting primes in O(n^{2/3}))

Code đếm số nguyên tố với n = 10^10

```C++
#include <math.h>
#include <stdio.h>

#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

#define long long long
const int N = 100005;
const int M = 1000000007;
bool np[N];
int p[N], pp = 0;

void eratos() {
    np[0] = np[1] = true;
    for (int i = 2; i * i < N; i++)
        if (!np[i])
            for (int j = i * i; j < N; j += i) np[j] = true;
    for (int i = 2; i < N; i++)
        if (!np[i]) p[++pp] = i;
}

long power(long a, long k) {
    long P = 1;
    while (k) {
        if (k & 1) P = P * a;
        k /= 2;
        a = a * a;
    }
    return P;
}

long power(long a, long k, long M) {
    long P = 1;
    for (a = a % M; k; k /= 2) {
        if (k & 1) P = P * a % M;
        a = a * a % M;
    }
    return P;
}

long root(long n, long k) {
    long x = pow(n, 1.0 / k);
    while (power(x, k) % M == power(x, k, M) && power(x, k) < n) x++;
    while (power(x, k) % M != power(x, k, M) || power(x, k) > n) x--;
    return x;
}

map<long, long> Phi[N];

long phi(long x, int a) {
    if (Phi[a].count(x)) return Phi[a][x];
    if (a == 1) return (x + 1) / 2;
    long Result = phi(x, a - 1) - phi(x / p[a], a - 1);
    return Phi[a][x] = Result;
}

long pi(long x) {
    if (x < N)
        return upper_bound(p + 1, p + pp + 1, x) - (p + 1);
    long a = pi(root(x, 4));
    long b = pi(root(x, 2));
    long c = pi(root(x, 3));
    long Sum = phi(x, a) + (b + a - 2) * (b - a + 1) / 2;
    for (int i = a + 1; i <= b; i++)
        Sum -= pi(x / p[i]);
    for (int i = a + 1; i <= c; i++) {
        long bi = pi(root(x / p[i], 2));
        for (int j = i; j <= bi; j++)
            Sum -= pi(x / p[i] / p[j]) - (j - 1);
    }
    return Sum;
}

int main() {
    eratos();
    long n;
    while (cin >> n)
        cout << pi(n) << endl;
}
```

Tham khảo [Lý thuyết đêm số nguyên tố](https://vi.wikipedia.org/wiki/H%C3%A0m_%C4%91%E1%BA%BFm_s%E1%BB%91_nguy%C3%AAn_t%E1%BB%91)

Tham khảo [codeforces blog](https://codeforces.com/blog/entry/91632)

# II. Nâng Cao 

## A. Euler FUnction 
Tham khảo [topcoder](https://www.topcoder.com/thrive/articles/Prime%20Numbers,%20Factorization%20and%20Euler%20Function)

## B. Euler's totient function 

Tham khảo[VNOI](https://vnoi.info/wiki/translate/he/Number-Theory-4.md)

Tham khảo [Elur's torient function](https://cp-algorithms.com/algebra/phi-function.html)

## C. Miller-Rabin probabilistic 

Hàm kiểm tra nếu là số nguyên tố dựa trên Miller-Rabin probabilistic có độ phức tạp: O(k.(logn)^3)

Tham khảo [Lý thuyết](https://vi.wikipedia.org/wiki/Ki%E1%BB%83m_tra_Miller-Rabin)

Tham khảo [code](https://github.com/leduckhai/Awesome-Competitive-Programming/blob/main/Mathematics/isPrime_Miller_Rabin.ipynb)




### D. Module & gcd 

Tham khảo [VNOI](https://vnoi.info/wiki/translate/he/So-hoc-Phan-1-Modulo-gcd.md)

Tham khảo [phép module cơ bản](https://kiendt.me/2017/12/25/10e9-plus-7-modulo/).

Tham khảo $a^b mod M $ [ở đây](https://daynhauhoc.com/t/tinh-a-b-mod-m-voi-a-b-lon/55636/6)

# III. Problem 

