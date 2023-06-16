#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long int a, b=1;

    while(cin>>a) {
        if(a<31) {
            for(int i=0; i<a; i++) {
                b *= 2;
            }
            cout << b << endl;
        }
        else {
            cout << "Value of more than 31" << endl;
        }
        b = 1;
    }

}