// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: PRINT A STRING USING POINTER (EXPERIMENT: 9D)

// CODE: 

#include <iostream>
using namespace std;

int main() {
    char str[] = "YASH SHRIVASTAVA";
    char *ptr = str;

    cout << "String: ";
    while (*ptr != '\0') { 
        cout << *ptr;
        ptr++; 
    }

    return 0;
}

// OUTPUT:

// String: YASH SHRIVASTAVA
