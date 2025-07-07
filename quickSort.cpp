#include <iostream>

using namespace std;

int partition(int *arr, int s, int e){
    
}


void quickSort(int *arr, int s, int e) {
    if(s>=e) {
        return;
    }

    // partition part

    int p = partiotion(arr, s,e);

    // left part
    quickSort(arr, s, p-1);
    //right part
    quickSort(arr, p+1, e);
}

int main() {
    int arr[5] = {4,6,3,7,8};
    int n= 5;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}