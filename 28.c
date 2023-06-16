#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N, sum=0;
    cin >> N;
    for(int i=1; i<=N; i++) {
        if(i%35==0) {
            if(i==35) {
                cout << i;
            }
            else {
                cout << " " << i;
            }
        }
    }
    cout << "\n";

    return 0;
}