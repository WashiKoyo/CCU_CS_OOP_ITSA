#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a=0,b=0,tmp=0;
    cin >> a >> b;
    int i = a*a+b*b;
    if(i>10000) {
        cout << "outside" << endl;
    }
    else {
        cout << "inside" << endl;
    }

    return 0;

}