#include <iostream>
using namespace std;

long long modularExponentiation(long long x , long long n, long long m){
    int ans = 1;

    while(n>0){
        if(n & 1){
            ans = (ans*x) % m;

        }
        x = (x*x)%m;
        n = n>>1;
    }
    return ans;
}
/*int main(){
    int x,n,m;

    cin >> x >> n >> m;

    modularExponentiation(x,n,m);



    cout <<"modularExponentiation is: " <<  modularExponentiation(x,n,m) << endl;


}*/