#include <iostream>
#include <string>
using namespace std;
int main () {
 string first, last ;
 cout << "Enter First Name: ";
 cin >> first;
cout << "Enter Last Name: ";
cin >> last;

string full = first + " "  + last;
cout << "Full Name: " << full << endl;
return 0;
}
