#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n) {

    int res = 1, i;
    for(i = 2; i <= n; i++)
        res = res * i;
    return res;
    }

    int main()
    {
        int num;
        cin>>num;
        if (num == 0 || num ==1){
        cout <<"Factorial of "<<num<<" is 1.";
        }
        else
        cout <<"factorial of "<< num<< " is"<<" "<<factorial(num)<< endl;
        return 0;
    }
    
