#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, output = "";
    int count = 0;

    cout << "Enter the stuffed bit string: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        output += input[i];

        if (input[i] == '1')
            count++;
        else
            count = 0;

        if (count == 5) {
            i++;        // Skip the stuffed 0
            count = 0;
        }
    }

    cout << "Frame after De-stuffing: " << output << endl;

    return 0;
}