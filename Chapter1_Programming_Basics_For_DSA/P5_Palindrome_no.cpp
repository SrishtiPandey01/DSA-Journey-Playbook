#include <iostream>
using namespace std;

int main () {
    int n, original, rev =0;
    cin >> n;
    original = n;
    while(n > 0) {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n /= 10;
    }
    if(original == rev) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
    return 0;
}