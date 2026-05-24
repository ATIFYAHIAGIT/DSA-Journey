#include <iostream>
using namespace std;

int main () {
    int a,b,next,n,i;

    a=0;
    b=1;

    cout<<"Enter the number of terms: ";
    cin>>n;

    if  (n<2) {
        if (n==0) {
        cout<<0;
    }   
        else {
            cout<<0<<" "<<1;
        }}

    else {
        cout<<0<<" ";

    for (i=3; i<=n+1; i++) {
        next = a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }}
return 0;
}