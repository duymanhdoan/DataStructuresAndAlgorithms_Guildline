#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    string str = "aab  bb aa bbb  aab        ab aaa     dd"; 
    int word=0;
    for(int i=0;i<str.size()-1;i++){
        if(str[i] == 32 && str[i+1] != 32)
            word++;
    }
    cout<<endl<<word<<endl;
    return 0; 
}