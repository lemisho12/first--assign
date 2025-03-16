
#include <iostream>
using namespace std;
int findSmallest(int arr[], int size) {
 int Smallest = arr[0];
 for (int i = 1; i < size; i++) {
 if (arr[i] < Smallest) {
    Smallest = arr[i];
 }
 }
 return Smallest;
}
int main() {
 int arr[] = {10, 20, 30, 40, 50};
 int size = sizeof(arr) / sizeof(arr[0]);
 int Smallest = findSmallest(arr, size);
 cout << "The Smallest number in the array is: " << Smallest <<
endl;
 return 0;
}