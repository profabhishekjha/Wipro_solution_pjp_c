#include <iostream>
using namespace std;

int addOne(int n){

    int rem, ans=0, p=1 ;
    while(n>0)
    {
        rem = n%10;
        (rem == 9)?rem = 0:rem+=1;
        ans=ans+(p*rem);
        p*=10;n/=10;
    }
    return ans;
}

int main() {

   int n;
   cin>>n;
   cout<<addOne(n);
   return 0;
}
