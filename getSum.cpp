#include <iostream>

using namespace std;

int getSum(int *arr, int n) {
    if(n == 0) 
        return 0;
    if(n == 1)
        return arr[0];
    
    return arr[n-1] + getSum(arr, n-1) ;
}


int main() {
    int arr[5] = {1, 2, 10, 4, 5};
    int n = 5;
    int sum = getSum(arr, n);
    cout <<"Afeter fun call: " << sum << endl;
    return 0;
}