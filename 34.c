#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int tmp, sum=0;
    cin >> tmp;
    for(int i=1; i<=tmp; i++) {
        if(tmp%i==0) {
            if(i==1) {
                cout << i;
            }
            else {
                cout << " " << i;
            }
        }
    }
    cout << "\n";

    return 0;
}