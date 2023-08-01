#include <bits/stdc++.h>
#include <string>
using namespace std;

string addBinary(string a, string b) {
    int carry = 0;
    int sum = 0;
    string result = "";

    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digitA = (i >= 0) ? a[i--] - '0' : 0;
        int digitB = (j >= 0) ? b[j--] - '0' : 0;

        sum = digitA + digitB + carry;
        carry = sum / 2;
        sum %= 2;

        result = to_string(sum) + result;
    }

    return result;
}

int main() {
    string binary1, binary2;

    cout << "Enter the first binary number: ";
    cin >> binary1;

    cout << "Enter the second binary number: ";
    cin >> binary2;

    string sum = addBinary(binary1, binary2);

    cout << "Sum of the two binary numbers is: " << sum << endl;

    return 0;
}
