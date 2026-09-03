#include <iostream>
using namespace std;

inline int getmax(int a , int b){
    return (a>b) ? a : b;
}
int main(){
    int a = 4;
    int b = 3;
    int ans = 0;

    ans = getmax(a,b);
    cout << ans << endl;

    a = a + 2;
    b = b + 3;

    ans = getmax(a,b);
    cout << ans << endl;
}