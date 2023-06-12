#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int down, height;
    float ans;

    cin >> down >> height;
    ans = down*height;
    ans /= 2;
    cout << fixed << setprecision(1) << ans << endl;
}