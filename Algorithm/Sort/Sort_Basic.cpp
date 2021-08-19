#include <bits/stdc++.h> 
using namespace std; 

void insertSort(int a[], int n)
{

    for(int i=0; i<n; i++){
        
        int tam = a[i]; 
        int j = i - 1;

        while( j>=0 && a[j] > tam){
            // j = 0
            a[j+1] = a[j]; 
            j = j - 1; 
            // j -- ; j = -1
        }
        a[j+1] = tam;

    }
}

void bullesort(int a[], int n){

    for (int i=0; i<=n-1; i++ ){

            for(int j=n-1; j>i; j--){
                if( a[j-1] > a[j])
                    swap(a[j],a[j-1]);  
            }
    }
}


int main(){
    int x[] = { 5, 25, 16, 8, 5, 1, 33}; 
    int size = sizeof(x) / sizeof(x[0]); 
    cout << "\nmang trc khi sap xep \n"; 
    for(int i=0; i<size ; i++)
    {
        cout << x[i] << " "; 
    } 
    bullesort(x ,size);
    cout << "\nmang sau khi sap xep \n"; 
    for(int i=0; i<size ; i++)
    {
        cout << x[i] << " "; 
    } 
    cout << "\n\n\n\n"; 
    return 0; 
}
