/*
    *****
     ****
      ***
       **
        *

*/

#include<iostream>
using namespace std;
int n=5;
int main () {
    for (int i=n;i>=1;i--){
        for( int j=n-1;j>=i;j--){
            cout<<" ";
        } for (int k=1;k<=i;k++) {
            cout<<"*";
        } cout<<endl;
    }
    return 0;
}