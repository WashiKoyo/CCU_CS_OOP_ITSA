#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, ans;
    while(cin >> a) {
        b = a*a;
        ans = (int)((b*10)+0.5) / 10.0;
        cout << fixed << setprecision(1) << ans << endl;
    }
}