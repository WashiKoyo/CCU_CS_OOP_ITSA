#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N, sum=0;
    cin >> N;
    for(int i=1; i<=N; i++) {
        if(i%3==0) {
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;

}