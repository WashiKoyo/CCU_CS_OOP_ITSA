#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a=0,b=0,max=0;
    cin >> a >> b;
    for (int i=1; i<=a&&i<=b; i++) {
        if (a%i==0 && b%i==0) {
            max = i;
        }
    }
    cout << max << endl;

    return 0;

}