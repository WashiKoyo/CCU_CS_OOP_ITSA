#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int up, down, height;
    float ans;

    cin >> up >> down >> height;
    ans = (up+down)*height;
    ans /= 2;
    cout << "Trapezoid area:" << fixed << setprecision(1) << ans << endl;
}