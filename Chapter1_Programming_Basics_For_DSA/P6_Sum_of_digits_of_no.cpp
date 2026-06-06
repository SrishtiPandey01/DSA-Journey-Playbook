#include<iostream>
using namespace std;

int sumOfDigits(int num) {

    int digSum = 0;

    while(num > 0) {
        int lastDigit = num % 10;
        digSum += lastDigit;
        num /= 10;
    }
    return digSum;

}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of digits is: " << sumOfDigits(num) << endl;
    return 0;
}