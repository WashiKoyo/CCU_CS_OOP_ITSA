#include <iostream>
#include <iomanip>

using namespace std;

int isPrime(int a) {
    for(int i=2; i<a; i++) {
        if(a%i==0) {
            return 0;
        }
    }
    return 1;
}

int main () {
    int tmp, prime;
    cin >> tmp;
    for(int i=1; i<tmp; i++) {
        if(isPrime(i)) {
            prime = i;
        }
    }
    cout << prime << endl;

    return 0;
}