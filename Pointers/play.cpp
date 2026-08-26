#include <iostream>
using namespace std;

int main(){
    //pointer to int , and pointer to some garbage value 
    
    //int *p  = 0;
    //cout << *p << endl;
    //cout << p <<endl;

   /* int i = 5;

    // Method 1
    int *ptr = &i;

    cout << *ptr << endl;
    cout << ptr << endl;


    // Method 2
    int *ptr2 = 0;
    ptr2 = &i;

    cout << *ptr2 << endl;
    cout << ptr2 << endl;
    */
   int num = 5;
   int a = num;
   cout <<"before: " << num  <<endl;
   a++;
   cout <<"after: " << num  <<endl;

   int *ptr = &num;
   cout <<"before: " << num  <<endl;
   (*ptr)++;
    cout <<"after: " << num  <<endl;

    //copying a pointer
    int *q = ptr;
    cout << ptr <<"___" << q <<endl;
    cout <<*ptr << "___" << *q << endl;
    
    //important concept

    int i = 5;

    int *p = &i;
    *p = *p + 1;

    cout << *p <<endl;
    cout << "before p is: "<< p << endl;
    p = p + 1;
    cout << "after p is : " << p <<endl;


}
    


