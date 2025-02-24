#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size]; // Creating a 1D array with user-defined size

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cout << "array" << "[" << i << "] :";
        cin >> arr[i]; // Taking input from user
    }
    for (int i = 0; i < size-1; i++) {
      for (int j = i; j < size; j++)
      {
        arr[j] > arr[j+1];
        arr[j] = arr[j+1];

      }
      
    }

    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Displaying array elements
    }
    
  
}
