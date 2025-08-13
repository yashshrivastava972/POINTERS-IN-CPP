// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: DIFFERENCE/ADDITION BETWEEN TWO POINTERS (EXPERIMENT: 9B)

// CODE: 

#include <iostream>
using namespace std;

int main() {
    int a = 20;
    int b = 25;
    int *aptr;
    int *bptr;
    aptr = &a;
    bptr = &b;
    
    int sum = *aptr + *bptr;
       cout<<"Addition: "<<sum<<endl;
       
    int diff = *aptr - *bptr;
       cout<<"Difference: "<<diff<<endl;
    
    return 0;
}

// OUTPUT:

// Addition: 45
// Difference: -5
