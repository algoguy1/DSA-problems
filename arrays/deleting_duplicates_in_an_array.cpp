#include<iostream>
using namespace std;

// Function to remove duplicates from an array and return the new size
int duplicate(int arr[], int n) {
    int j = 0;
    // Loop over all elements in the array
    for (int i = 0; i < n; i++) {
        bool is_duplicate = false;
        // Compare current element with all previous unique elements
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                // If element is a duplicate, mark it as such and exit the loop
                is_duplicate = true;
                break;
            }
        }
        // If element is unique, copy it back into the array
        if (!is_duplicate) {
            arr[j] = arr[i];
            j++;
        }
    }
    // Return the new size of the array (number of unique elements)
    return j;
}

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int new_size = duplicate(arr, n);
    // Print the array with duplicates removed
    for (int i = 0; i < new_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
