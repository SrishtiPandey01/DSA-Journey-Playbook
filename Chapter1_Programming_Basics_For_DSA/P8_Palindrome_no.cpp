
#include<iostream>
using namespace std;

int main() {
    int num, revNum = 0, tempNum;
    cout << "Enter a number: ";
    cin >> num;

    tempNum = num;

    while(tempNum > 0) {
        int lastDigit = tempNum % 10;
        revNum = revNum * 10 + lastDigit;
        tempNum /= 10;
    }

    if(num == revNum)
        cout << num << " is a palindrome number." << endl;
    else
        cout << num << " is not a palindrome number." << endl;

    return 0;
}