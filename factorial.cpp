#include <iostream>
using namespace std;

int main () {
    cout<<"Enter a number: ";
    int i,x;
    cin>>x;
    int factorial=1;
    for (i=1;i<=x;i++) {
        factorial=factorial*i;
    }
    cout<<"The factorial of x is: "<<factorial;
return 0;   
}


