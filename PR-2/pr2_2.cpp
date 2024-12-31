#include <iostream>
#include <string>
using namespace std;

bool testCase2(const string& str) {
    if (str.empty()) return false;
    return (str[0] == str[str.length() - 1]); // Check if first and last letters are the same
}

int main() {
    string input;
    cout << "Enter string for test case 2 (over a, b, c, starts and ends with same letter): ";
    cin >> input;
    if (testCase2(input)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }
    return 0;
}
