#include <iostream>
using namespace std;

int main () {
    cout<<"Enter upto what number of terms do you what the sum: ";
    int x,i,sum;
    cin>>x;
    sum=0;
    for (i=1;i<=x;i++) {
        sum=sum+i;
    }
    cout<<"The sum of n terms is: "<<sum;
    return 0;
}
