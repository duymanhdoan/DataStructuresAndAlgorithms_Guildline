#include <iostream>
#include <iterator>
#include <map>
using namespace std;
void printmul(multimap<int, int> mul)
{
    multimap<int,int> :: iterator itr; 
    cout << "\nThe multimap gquiz1 is elements is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = mul.begin(); itr != mul.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
} 
int main()
{
    multimap<int, int> gquiz1; // empty multimap container
    multimap<int, int>::iterator itr;
    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(6, 50));
    gquiz1.insert(pair<int, int>(6, 10));
    gquiz1.insert(pair<int, int>(4, 50));
    gquiz1.insert(pair<int, int>(5, 10));
 
    printmul(gquiz1); 

    cout << "\ncheck element first and second of gquiz1\n"; 
    itr = gquiz1.begin(); 
    cout << itr->first << " " << itr->second << endl;
    int num = gquiz1.erase(itr->first); 
    cout << num << endl;
    printmul(gquiz1);   
    cout << "\n find element ramdom \n"; 
    cout << gquiz1.find(5) -> first << " " << gquiz1.find(5) -> second; 

    return 0;
}