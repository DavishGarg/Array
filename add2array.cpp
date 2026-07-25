#include <iostream>
#include <vector>
using namespace std;

vector<int> addArraysAsNumbers(vector<int>& num1, vector<int>& num2) {
    vector<int> result;
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0) ? num1[i] : 0;
        int digit2 = (j >= 0) ? num2[j] : 0;

        int sum = digit1 + digit2 + carry;
        result.insert(result.begin(), sum % 10);  // Insert at beginning
        carry = sum / 10;

        i--;
        j--;
    }

    return result;
}

int main() {
    vector<int> num1 = {1, 1,1};
    vector<int> num2 = {9, 9, 9};

    vector<int> result = addArraysAsNumbers(num1, num2);

    cout << "Result: ";
    for (int digit : result) {
        cout << digit << " ";
    }

    return 0;
}
