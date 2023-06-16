#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int tmp, sum=0;
    cin >> tmp;
    for(int i=2; i<=tmp; i++) {
        for(int j=1; j<i; j++) {
            if(i%j==0) {
                sum += j;
            }
        }
        if(sum==i) {
            if(i==6) {
                cout << i;
            }
            else {
                cout << " " << i;
            }
        }
        sum = 0;
    }
    cout << "\n";

    return 0;
}