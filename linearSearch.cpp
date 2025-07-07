#include <iostream>

using namespace std;

bool linearSearch(int *arr, int n, int k) {
    // base case
    if(n==0) 
        return false;
    
        if(arr[0] == k){
            return true;
        } else {
            return linearSearch(arr+1, n-1, k);
        }
}

int main() {
    int arr[5] = {1, 2, 10, 4, 5};
    int n = 5;
    int k = 18;

    // bool ans = 
    linearSearch(arr, n, k)? 
        cout << "Present" << endl :
        cout << "Absent" << endl;
    return 0;
}