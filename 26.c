#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N, sum=0;
    cin >> N;
    for(int i=1; i<=N; i++) {
        cout << i << "*" << i << "=" << i*i << endl;
    }

    return 0;

}