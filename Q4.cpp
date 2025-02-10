#include <iostream>
using namespace std;
int main() {
  int n,r,c,m;
    cout<<"\t#SQUARE MATRIX"<<endl;
    cout<<"\nEnter number of rows and column in matrix : ";
    cin>>m >>n;  

    int ary[m][n];
    for (r=0;r<n;r=r+1) {
        for (c=0;c<n;c=c+1) {
            cout<<"\nEnter element ("<<r+1<<","<<c+1<<") : ";
            cin>>ary[r][c];
        }
    }

    cout<<"\n\t#Given array in MATRIX form \n\n";

    for (r=0;r<n;r=r+1) {
        cout<<"\t\t";
        for(c=0;c<n;c=c+1) {
            cout<<ary[r][c]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}