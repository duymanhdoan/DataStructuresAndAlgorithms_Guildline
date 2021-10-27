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
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001; 

// khai báo câu trúc dữ liệu. 
struct node {
    int infor;
    struct node *left, *right;
};

typedef node* tro; 
tro root; 
// hàm khởi tạo cây nhị phân tìm kiếm. 

tro newNode(int item)
{
    // tro temp
    //     = (tro)malloc(sizeof(struct node));
    tro temp = new node();
    temp->infor = item;
    temp->left = temp->right = NULL;
    return temp;
}
 
// Duyệt theo thứ tự trước
void perorder(tro root)
{   // gốc - trái - phải
    if (root != NULL) {
        cout << root->infor <<" ";
        perorder(root->left);
        perorder(root->right);
    }
}
// Duyệt theo thứ tự giữa
void inorder(tro root)
{   // trái - gốc - phải 
    if (root != NULL) {
        inorder(root->left);
        cout << root->infor <<" ";
        inorder(root->right);
    }
}
//Duyệt theo thứ tự sau
void postorder(tro root)
{   // trái - phải -- gốc. 
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->infor <<" ";
    }
}
 
/* Truyền vào 1 cây ko rỗng (non-empty), return cái node
với giá trị nhỏ nhất trong cây. Node này không cần
phải duyệt toàn bộ cây. */
tro minValueNode(tro node)
{
    tro current = node;
 
    /* duyệt để tìm lá phái bên trái cùng */
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}
 
/* Truyền vào cây nhị phân và key cần xóa, Hàm này
sẽ xóa key truyền vào trả về cây mới */
tro deleteNode(struct node* root, int key)
{
    /*
                            CASE 1
              50                             50
           /     \         delete(20)      /   \
          30      70       --------->    30     70 
         /  \    /  \                     \    /  \ 
       20   40  60   80                   40  60   80
                            CASE 2
              50                            50
           /     \         delete(30)      /   \
          30      70       --------->    40     70 
            \    /  \                          /  \ 
            40  60   80                       60   80
                            CASE 3
              50                            60
           /     \         delete(50)      /   \
          40      70       --------->    40    70 
                 /  \                            \ 
                60   80                           80
    
    */
    // base case
    if (root == NULL)
        return root;
 
    /* xóa phần tử nhỏ hơn khóa gốc,
     nằm phía cây con bên trái.
    */
    if (key < root->infor)
        root->left = deleteNode(root->left, key);
 
    /* xóa phần tử lớn hơn khóa gốc,
     nằm phía cây con bên phải.
    */
    else if (key > root->infor)
        root->right = deleteNode(root->right, key);
 
    /*xóa khóa trung với khóa gốc */
    else {
        // node không có node con (no child)
        if (root->left==NULL and root->right==NULL)
            return NULL;
       
        // node có 1 con hoặc không có 
        else if (root->left == NULL) {
            tro temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            tro temp = root->left;
            free(root);
            return temp;
        }
 
        // node với 2 con. lấy con kế tiếp của nó. 
        // ( giá trị nhỏ nhất cây con bên phải.)
        tro temp = minValueNode(root->right);
 
        // Copy the inorder successor's content to this node
        /*sao chép thông tin node con cho cha nó.
         khi này nút được sao chép ko còn nút lá bên dưới.*/
        root->infor = temp->infor;
 
        // Delete the inorder successor
        // xóa phần tử  theo thứ tự con của cha. ( con của cha nó)
        root->right = deleteNode(root->right, temp->infor);
    }
    return root;
}
 
tro search(tro root, int key)
{
    // Base Cases: cây null hoặc giá trị cần tìm ở tại root hiện tại. 
    if (root == NULL || root->infor == key)
       return root;
    
    // Key lớn hơn key của root 
    else if (root->infor < key && root->right!=NULL)
       return search(root->right, key);
 
    // Key nhỏ hơn key của node. 
    else if (root->infor > key && root->left!=NULL)
        return search(root->left, key);
    else 
        return newNode(-1); 
}

/* hàm thực hiện khả năng thêm 1 node mới vào 
cây nhị phân tìm kiếm  (BST)  */
tro insert(tro node, int key)
{
    /* Nếu cây empty thì return node */
    if (node == NULL)
        return newNode(key);
 
    /* Mặt khác, lặp lại việc ghé thăm trái hoặc phải của cây */
    if (key < node->infor)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
 
    /* return the (unchanged) node pointer */
    return node;
}

int main()
{
    /* Let us create following BST
            50
          /   \
         30    70
        / \   / \
       20 40 60 80 
    */

    tro root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
 
    cout << "\nDuyet theo thu tu trước của cây \n";
    perorder(root);
    cout << "\nDuyet theo thu tu giữa của cây \n";
    inorder(root);
    cout << "\nDuyet theo thu tu sau của cây \n";
    postorder(root);



    cout << "\nDelete 20\n";
    root = deleteNode(root, 20);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
 
    cout << "\nDelete 30\n";
    root = deleteNode(root, 30);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
 
    cout << "\nDelete 50\n";
    root = deleteNode(root, 50);
    
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
    cout << "\nsearch node co key = 100\n";
    tro answer =  search(root, 100); 
    cout << answer->infor; 
    cout <<"\n\n\n";
    return 0;
}
 