#include <iostream>
using namespace std;

int setBit(int n, int pos) {
    return (n | (1<<pos));
}

int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return (n & mask);
} 

int showBit(int n, int pos){
    return ((n & (1 << pos)) != 0);
}

int main(){
    int n,pos; 
    cin >> n >> pos;
    cout << showBit(n,pos) << endl;
    return 0;
}