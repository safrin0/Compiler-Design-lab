#include<iostream>

using namespace std;

int main() {
string input;


cout<< "Enter an Expression: ";
cin>> input;

int count=1;

for (char c :input) {
if ( c == '+' || c =='-' || c == '*' ||
     c== '/' || c == '%' || c== '=' ) {
        cout << "operator" << count<< ":" << c << endl;
       count++;
     }
}
    return 0;

    }
