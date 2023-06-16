#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int inch;
    float kilo;

    while(cin>>inch) {
        kilo = inch*1.6;
        cout << fixed << setprecision(1) << kilo << endl;
    }
}