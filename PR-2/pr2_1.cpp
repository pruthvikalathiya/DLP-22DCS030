#include <iostream>
#include <string>
using namespace std;

bool testCase1(const string& str) {
    size_t pos = str.find("011");
    return pos != string::npos; // Return true if "011" is found
}

int main() {
    string input;
    cout << "Enter string for test case 1 (over 0 and 1, where 0 is immediately followed by 11): ";
    cin >> input;
    if (testCase1(input)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }
    return 0;
}
