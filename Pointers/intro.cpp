#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "enter your number: ";
    cin >> num;

    //adress of operter -> &

    cout <<"adress of num: " << &num <<endl;
    cout <<"value of num: " << num <<endl;

    //pointer 

    int *ptr = &num;

    cout <<"adress of num is : " << ptr << endl;
    cout <<"value of num is : " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout <<"adress of num is : " << p2 << endl;
    cout <<"value of num is : " << *p2 << endl;

   
    cout <<"size of integer is :" << sizeof(num) << endl;
    cout <<"size of pointer is :" << sizeof(ptr) << endl;
    cout <<"size of pointer is :" << sizeof(p2) << endl;
     




}