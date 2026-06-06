# include<iostream>
using namespace std;    

int reverseNo(int num) {
    int revNum = 0;

    while(num > 0) {
        int lastDigit = num % 10;
        revNum = revNum * 10 + lastDigit;
        num /= 10;
    }
    return revNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reverse of the number is: " << reverseNo(num) << endl;
    return 0;
}