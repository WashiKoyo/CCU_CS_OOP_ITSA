#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long int cost;
    cin >> cost;
    int a=0, b=0, c=0;
    while(cost>0) {
        if(cost>=10) {
            a = cost/10;
            cost -= 10*a;
        }
        else if(cost>=5) {
            b = cost/5;
            cost -= 5*b;
        }
        else {
            c = cost;
            cost -= c;
        }
    }

    cout << "NT10=" << a << "\n" << "NT5=" << b << "\n" << "NT1=" << c << endl;

    return 0;

}