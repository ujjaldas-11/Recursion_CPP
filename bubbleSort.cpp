#include <iostream>


using namespace std;

void sorting(int *arr, int n) {
    //base case
    if(n==1)
        return;
    
    // perform one pass of bubble sort
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    // recursive call
    sorting(arr, n-1);
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    sorting(arr, n);
    cout << "Sorted array: ";
    for(int i=0; i<n; i++) {    
        cout << arr[i] << " ";
    }
    return 0;
}