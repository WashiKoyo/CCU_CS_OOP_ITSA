#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int min=0;
    cin >> min;
    double cost=0;
    if(min<=800) {
        cost = min*0.9;
    }
    else if(min>800&&min<1500) {
        cost = min*0.9;
        cost *= 0.9;
    }
    else if(min>=1500) {
        cost = min*0.9;
        cost *= 0.79;
    }

    cout << fixed << setprecision(1) << cost << endl;

    return 0;

}