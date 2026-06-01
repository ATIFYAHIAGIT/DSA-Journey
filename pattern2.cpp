#include <iostream>
using namespace std;

int main () {
    int row, col,i,j;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter column: ";
    cin>>col;

    for (i=1;i<=row;i++) {
        for (j=1;j<=col;j++) {
            cout<<"10 ";
        }   
        cout<<" \n";   
    }
    return 0;
}

