 
#include <iostream>
using namespace std;

int getsum(int* arr, int n) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    // Dynamic array
    int* arr = new int[n];

    // Taking input
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = getsum(arr, n);

    cout << "Answer is: " << ans << endl;

    // Free memory
    delete[] arr;
}