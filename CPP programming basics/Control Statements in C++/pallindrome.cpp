#include <iostream>
using namespace std;

int main(){
    int n,m, remainder , reverse_number = 0;
    cin >> n;

    if(n<10){
    cout << "Number should have minimum 2 digits";
    }
    else{
    m = n;
    while (m != 0) {
        remainder = m%10;
        reverse_number = (reverse_number * 10) + remainder;
        m /= 10;
    }

    
    if (n == reverse_number)
        cout<< n << " is a pallindrome";
    
    else
        cout<<n<<" is not a pallindrome";
}
}