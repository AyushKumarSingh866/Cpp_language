#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;
    
    cout << "Enter the size of array: ";
    cin >> n;
    
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort
    for (int i = n - 2; i >= 0; i--) {
        bool swapped = false;
        for (int j = 0; j <= i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
       
        if (!swapped) {
            break;
        }
    }

    // Printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
