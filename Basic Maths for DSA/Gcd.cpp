#include <iostream>
using namespace std;
/*int gcd(int a , int b){
    if(a == 0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(b !=0){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}*/


/*int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main(){
    int a;
    int b;
    cin >> a >> b;
    gcd(a,b);
    cout << "The gcd of " << a <<" & " << b << " is: " << gcd(a,b) <<endl;
    
    return 0;
}*/
 
#include <numeric>
 

int main() {
    cout << gcd(48, 18);
}