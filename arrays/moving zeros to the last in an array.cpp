#include <iostream> //code takes O(n) complexity
#include <utility>
using namespace std;
void dlt(int arr[], int n)
{
    int nextNonZero = 0; // initialize variable to keep track of index for next non-zero element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {                                   // if the current element is non-zero
            swap(arr[i], arr[nextNonZero]); // swap it with the next available non-zero index
            nextNonZero++;                  // increment the next available non-zero index
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 0, 7, 0, 9, 11, 56, 0, 32, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    dlt(arr, n);
    return 0;
}

/*#include<iostream>                                   //code taking O(n^2) time complexity
using namespace std;
void dlt(int arr[], int n){
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i;j<n-1;j++){
                arr[j]=arr[j+1];


            }

            arr[n-1]=0;
            n=n-1;

            x++;
        }

    }
    n=n+x;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,0,7,0,9,11,56,0,32,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    dlt(arr,n);

    return 0;
}*/
