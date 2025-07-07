#include <iostream>


using namespace std;

bool isPallindrome(string str, int i, int j) {
    //base case
    if(i > j)
        return true;


    if( str[i] != str[j]) {
        return false;
    } else {
        // recursive case
        return isPallindrome(str, i+1, j-1);
    }
    

}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int n = str.length()-1;

    /// function call
    bool pallindrome = isPallindrome(str, 0, n);
    
    if(pallindrome) {
        cout << "The string is a pallindrome." << endl;
    } else {
        cout << "The string is not a pallindrome." << endl;
    }
   

    return 0;
}