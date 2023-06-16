#include <iostream>
#include <iomanip>

using namespace std;

int isPrime(unsigned long long int a) {
    for(int i=2; i<a; i++) {
        if(a%i==0) {
            return 0;
        }
    }
    return 1;
}

int main () {
    unsigned long long int tmp;
    cin >> tmp;
    if(isPrime(tmp)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}