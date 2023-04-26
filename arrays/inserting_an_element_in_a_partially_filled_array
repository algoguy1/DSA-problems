//inserting a element 'x' on position 'pos' in a partially filled array
#include<iostream>
using namespace std;
int insert(int arr[],int n, int pos, int cap, int x)                      
{
    if(n==cap){                            //checking if array have free space or not
        return n;
    }
    int idx=pos-1;
    for(int i=n-1; i>=idx;i--){
        arr[i]=arr[i+1];
    }
    arr[idx]=x;
    return (n+1);
}
int main(){
    int arr[5];
    insert(arr,3,2,5,6);                    //inserting 6 on 2nd(index 1) position
    cout<<arr[1];                           //printing element of index 1 of array 'arr'
    return 0;

}
