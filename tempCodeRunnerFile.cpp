#include <iostream>
using namespace std;

int main () {
    cout<<"Enter number: ";
    int n,m,i,num;
    cin>>n;
    cout<<"Enter the exponent of the number: ";
    cin>>m;
    
    num=0;

    if (m==0){
        cout<<"0";
    }

    else if (m==1) {
        cout<<"m";
    }

    else { 
    for (i=1;i=m;i++ ) {
        num=n*i;
    }
        cout<<num;}
    return 0;
}