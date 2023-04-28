//Deleting an element in an array and shifting the elements after the deleted element one position to the left
#include<iostream>
using namespace std;

int delet(int arr[], int cap, int x) {
    int i;
    
    for(i = 0; i < cap; i++) {                      // loop through the array to find the index of the element to be deleted
        if(arr[i] == x) {
            break;
        }
    }
   
    if(i == cap) {                                  // if the element is not found, return the original array size
        return cap;
    }

    
    for(int j = i; j < cap - 1; j++) {
        arr[j] = arr[j+1];                          //shift the elements after the deleted element one position to the left
    }
    
    arr[cap-1] = 0;                                 //set the last element to 0

    
    return (cap - 1);                               // return the new array size
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};                   // delete the element 1 from the array
    
    cout << delet(arr, 5, 1) << endl;
    
    cout << arr[3] << endl;                         // print the value of the element at index 3 (ie 4)

    return 0;
}
