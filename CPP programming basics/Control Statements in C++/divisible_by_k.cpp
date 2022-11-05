#include <iostream>
using namespace std;

int main(){

    int l, r , k , m=0;
    cin >> l >> r >> k;

    while (l<= r){
       if (l % k == 0){
        m += 1;
       } 
    ++l;   
    
    }
    cout << m;
}
