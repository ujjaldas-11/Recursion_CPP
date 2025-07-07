#include <iostream>


using namespace std;

bool sorting(int *arr, int n) {
    if(n == 0 || n == 1) 
        return true;
    
    if(arr[0] > arr[1]) {
        return false;
    } 

    return sorting(arr + 1, n - 1);

}

int main() {
    int arr[8] = {2, 4, 6, 8, 10, 12, 16, 18};

    sorting(arr, 8) ? 
        cout << "Array is sorted" << endl :
        cout << "Array is not sorted" << endl;
    return 0;
}