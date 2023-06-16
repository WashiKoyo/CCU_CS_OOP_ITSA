#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int N, tmp;
    cin >> N;
    tmp = N;
    int a, b, c;
    a = N/100;
    N -= 100*a;
    b = N/10;
    N -= 10*b;
    c = N;
    a = a*a*a;
    b = b*b*b;
    c = c*c*c;
    if(a+b+c==tmp) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}