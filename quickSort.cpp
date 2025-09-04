#include <iostream>

using namespace std;

int partition(int *arr, int s, int e){
    int pivot = arr[s];
    int cnt = 0;

    for(int i=s+1; i<=e; i++) {
        if(arr[i] <= pivot) {
            cnt++;
        }
    }

    int pivotIndex = s+cnt;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;
    
    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivot) {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if( i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}


void quickSort(int *arr, int s, int e) {
    if(s>=e) {
        return;
    }

    // partition part

    int p = partition(arr, s,e);
    
    // left part
    quickSort(arr, s, p-1);
    //right part
    quickSort(arr, p+1, e);
}

int main() {
    int arr[] = {4,6,3,7,8,1,9,0,12,54,9,1,2};
    int n= sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}