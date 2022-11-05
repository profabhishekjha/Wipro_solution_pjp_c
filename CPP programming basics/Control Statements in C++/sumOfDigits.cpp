#include <iostream>
using namespace std;

int main(){
    int n, remainder, result=0;
    cout << "Input Number is: ";
    cin>>n;
    while (n != 0){
        remainder = n % 10;
        result += remainder;
        n /= 10;
    }
    cout<<result;
}