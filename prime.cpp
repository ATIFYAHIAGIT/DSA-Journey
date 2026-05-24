#include <iostream>
using namespace std;

int main() {
    cout<<"Enter a number: ";
    int i,x;
    cin>>x;

    if (x<2) {
        cout<<"x is not a prime number";
    }

    for (i=2;i<x;i++) {
        if (x%i==0) {
            cout<<"Not a prime number";
            return 0;
        }
    }

    cout<<"Prime number";
    return 0;
}