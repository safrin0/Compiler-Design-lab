#include <iostream>
using namespace std;
int main() {
 int n;
 cout<< "Enter number of element:";
 cin>> n;
 double sum = 0;
 double arr[n];
 cout << "Enter " << n << " elements: \n ";
 for (int i =0; i <n; i++){
    cin>> arr[i];
    sum += arr [i];

 }

cout <<"Average: " << sum / n <<endl;
return 0;










}
