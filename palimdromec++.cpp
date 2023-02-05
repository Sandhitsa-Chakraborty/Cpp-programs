#include <iostream>
using namespace std;
int main() {
  int n, reversed = 0, remainder, original;
  cout<<"Enter an integer: ";
    cin>>n;
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed)
        cout<<"number is a palindrome."<<original;
    else
        cout<<"number is not a palindrome."<<original;

    return 0;
}

