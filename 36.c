#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int tmp;
    cin >> tmp;
    if(tmp>=3&&tmp<=5) {
        cout << "Spring\n";
    }
    else if(tmp>=6&&tmp<=8) {
        cout << "Summer\n";
    }
    else if(tmp>=9&&tmp<=11) {
        cout << "Autumn\n";
    }
    else {
        cout << "Winter\n";
    }

    return 0;
}