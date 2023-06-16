#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N, B, sum=0;
    cin >> N >> B;
    for(int i=N; i<=B; i++) {
        sum += i;
    }
    cout << sum << endl;

    return 0;

}