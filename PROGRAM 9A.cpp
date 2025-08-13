// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: BASIC POINTER ARITHMETIC - INCREMENT OF POINTER (EXPERIMENT: 9A)

// CODE: 

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *aptr;
    aptr = &a;
    cout<<"integer address before increment:"<<aptr<<endl;
    aptr++;
    cout<<"integer address after increment:"<<aptr<<endl;
    
    float b = 10.1;
    float *bptr;
    bptr = &b;
    cout<<"float address before increment:"<<bptr<<endl;
    bptr++;
    cout<<"float address after increment:"<<bptr<<endl;
    
    double c = 10.1010;
    double *cptr;
    cptr = &c;
    cout<<"double address before increment:"<<cptr<<endl;
    cptr++;
    cout<<"double address after increment:"<<cptr<<endl;
    
    bool d = 10.1010;
    bool *dptr;
    dptr = &d;
    cout<<"bool address before increment:"<<dptr<<endl;
    dptr++;
    cout<<"bool address after increment:"<<dptr<<endl;
}

// OUTPUT:

// integer address before increment:0x7ffe29f629dc
// integer address after increment:0x7ffe29f629e0
// float address before increment:0x7ffe29f629d8
// float address after increment:0x7ffe29f629dc
// double address before increment:0x7ffe29f629d0
// double address after increment:0x7ffe29f629d8
// bool address before increment:0x7ffe29f629cf
// bool address after increment:0x7ffe29f629d0
