#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {
string input;
bool isNumeric = true;

cout << "Enter input: ";
cin >> input;
for (char c: input){
    if (!isdigit(c)){

        isNumeric = false;
        break;

    }
}

if (isNumeric)
    cout<< "Numeric Constant" <<endl;
else
    cout << "Not Numeric" <<endl;
return 0;

}

