#include <iostream> 
using namespace std;

int main () 
{
    cout<<"Enter the number of rowns and columns: ";
    int x,i,j;
    cin>>x;

    for (i=1;i<=x;i++) {
        for (j=1;j<=x;j++)  {
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
