#include <iostream>
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
        cout <<"sum of digits of a number: " << sumOfDigits(1234) << endl;

        return 0;
    }

