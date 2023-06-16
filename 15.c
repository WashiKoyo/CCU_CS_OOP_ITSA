#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a=0,b=0,tmp=0;
    cin >> a >> b;
    if(a>100||b>100) {
        cout << "outside" << endl;
    }
    else {
        cout << "inside" << endl;
    }

    return 0;

}