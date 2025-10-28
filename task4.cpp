#include <iostream>
#include <cctype>
using namespace std;
int main() {
string input;
bool isValid= true;

cout<<"Enter An Identifier: ";
cin>> input;
if(!(isalpha(input[0]) || input[0] == '_'))
isValid = false;
else {
    for (size_t i = 1; i< input.size(); i++) {
        if (!(isalnum(input[i]) ||input[i] == '_')) {

isValid = false;
break;
}
}
}
if (isValid)
    cout << "Valid Identifier" <<endl;
else
    cout << "Invalid Identifier" <<endl;
return 0;


}
