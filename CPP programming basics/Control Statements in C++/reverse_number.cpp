#include <iostream>
using namespace std;

int main(){
    int n, remainder , reverse_number = 0;
    cin >> n;
    while (n != 0) {
        remainder = n%10;
        reverse_number = (reverse_number * 10) + remainder;
        n /= 10;
    }
    cout << reverse_number;
    return 0;
}