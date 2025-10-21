#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a line: ";
    getline(cin, input);

    if (input.size() >= 2 && input[0] == '/' && input[1] == '/')
        cout << "Single line comment" << endl;
    else if (input.size() >= 4 && input[0] == '/' && input[1] == '*' &&
             input[input.size() - 2] == '*' && input[input.size() - 1] == '/')
        cout << "Multi-line comment" << endl;
    else
        cout << "Not a comment line" << endl;

    return 0;
}
