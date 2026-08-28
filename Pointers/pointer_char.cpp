#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    
    char ch[6] = "abcd";

    cout << arr << endl;
    cout << ch << endl;


    char *p = &ch[0];
    // print entire char not first element adress
    cout << p <<endl;


    char temp = 'a';
    char *c = &temp;

    cout << c << endl;

}
