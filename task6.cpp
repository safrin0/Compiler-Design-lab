#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter number of elements: ";
cin >> n;
 int arr [n];
 cout << "Enter " << n << " elements:  \n";
for (int i = 0; i <n; i++)
cin >>arr[i];
int min = arr [0], max = arr[0];
for (int i= 1; i < n; i++){
  if (arr[i] < min) min =arr[i];

  if (arr[i] > max) max = arr [i];


}
cout << "Minimum:  " << min <<endl;
cout << "Maximum:  " << max <<endl;
return 0;


}
