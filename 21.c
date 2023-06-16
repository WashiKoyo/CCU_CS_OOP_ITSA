#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int tmp;
    long ans=1;

    cin >> tmp;
    ans = tmp;
    if(tmp==0) {
        ans = 1;
    }

    while(tmp>1) {
        ans *= tmp-1;
        tmp--;
    }

    cout << ans << endl;

    return 0;

}