#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int n=0;
    cin >> n;
    if(numeriprimi(n,n/2)==true){
        cout << "numero primo" << endl;
    } else {
        cout << "numero non primo" << endl;
    }

    return 0;
}
