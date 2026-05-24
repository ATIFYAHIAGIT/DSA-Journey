#include <iostream>
using namespace std;

int main () {
    cout<<"Enter number: ";
    int n,m,i,num;
    cin>>n;
    cout<<"Enter the exponent of the number: ";
    cin>>m;
    
    num=1;

    if (m==0){
        cout<<"1";
    }

    else if (m==1) {
        cout<<"m";
    }

    else { 
    for (i=2;i<=m+1;i++ ) {
        num=num*n;
    }
        cout<<num;}
    return 0;
}
