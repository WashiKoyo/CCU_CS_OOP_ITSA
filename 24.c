#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int time, spend;
    double money;
    cin >> time >> spend;

    if(time<=60) {
        money = time*spend;
    }
    else if(time>60&&time<=120) {
        money = 60*spend;
        time -= 60;
        money += time*spend*1.33;
    }
    else if(time>120) {
        money = 60*spend*2.33;
        time -= 120;
        money += time*spend*1.66;
    }
    cout << fixed << setprecision(1) << money << endl;

    return 0;

}