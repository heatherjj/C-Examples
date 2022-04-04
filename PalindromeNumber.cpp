// PalindromeNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program compares two numbers and checks if they are palindromic 

#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    //complete the function
    int palNum = x;
    int reverseNum = 0;
    int digit;

    do {
        //grabs last digit of number
        digit = palNum % 10;
        //stores digit
        reverseNum = (reverseNum * 10) + digit;
        //removes digit and passes through again
        palNum = palNum / 10;
    } while (palNum != 0);
    if (x == reverseNum) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;

    if (isPalindrome(n)) {
        cout << n << " is a palindrome";
    }
    else {
        cout << n << " is NOT a palindrome";
    }
    return 0;
}
