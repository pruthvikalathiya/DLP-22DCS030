#include <iostream>
#include <string>
#include <cctype> // For isalpha and isalnum
using namespace std;

bool testCase3(const string& str) {
    if (str.empty()) return false;
    if (!isalpha(str[0])) return false; // Check if the string starts with an alphabet
    for (char c : str) {
        if (!isalnum(c)) return false; // Ensure all characters are alphanumeric
    }
    return true;
}

int main() {
    string input;
    cout << "Enter string for test case 3 (lowercase alphabets and digits, starts with alphabet): ";
    cin >> input;
    if (testCase3(input)) {
        cout << "String is valid" << endl;
    } else {
        cout << "String is invalid" << endl;
    }
    return 0;
}
