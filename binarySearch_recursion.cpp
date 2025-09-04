#include <iostream>

using namespace std;

bool binarySearch(int *arr, int s, int e, int k) {
    //base case 

    if(s > e)
        return false;
    
    int mid = s + (e-s)/2;

    // first check if mid is equal to k
    if(arr[mid] == k) {
        return true;
    }

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    if(arr[mid] > k) {
        return binarySearch(arr, s, mid-1, k);
    } 
}

int main() {
    int arr[8] = {2, 4, 6, 8, 10, 12, 16, 18};
    int n = 8;
    int k = 20;

    // bool ans = 
    binarySearch(arr, 0, n-1, k) ? 
    cout << "Present" << endl :
    cout << "Absent" << endl;
    return 0;
}