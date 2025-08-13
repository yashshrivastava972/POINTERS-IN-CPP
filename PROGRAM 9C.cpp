// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: TRAVERSING ARRAY IN REVERSE USING POINTER (EXPERIMENT: 9C)

// CODE: 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pointer to the last element
    int *ptr = arr + n - 1;

    cout << "Array in Reverse Order using Pointer: ";
    for (int i = 0; i < n; i++) {
        cout << *ptr << " ";
        ptr--;
    }

    return 0;
}

// OUTPUT:

// Enter number of elements: 5
// Enter 5 elements: 1
// 2
// 3
// 4
// 5
// Array in Reverse Order using Pointer: 5 4 3 2 1 
