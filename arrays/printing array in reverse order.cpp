#include<iostream>
using namespace std;

void reverse(int arr[], int n) {
    int brr[n]; // create a new array brr to store the reversed elements
    for(int i=0; i<n; i++) {
        brr[n-i-1] = arr[i]; // copy elements of arr to brr in reverse order
    }
    for(int i=0; i<n; i++) {
        cout << brr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // calculate the number of elements in arr
    reverse(arr, n);
    return 0;
}
