#include <iostream>


using namespace std;

void reverseString( string& str, int i, int j ){
   // base case

   if(i>j)
    return;

    // solve the 1st case
    swap(str[i], str[j]);
    
    // recursive call
    reverseString(str,i+1,j-1);
}


int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    reverseString( str,0,str.length()-1);
    cout << "Reverse string: " << str << endl;

    return 0;
}