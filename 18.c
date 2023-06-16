#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int tmp, ans[10]={0}, flag=0;
    cin >> tmp;
    if(tmp>127||tmp<-128) {
        return 0;
    }
    if(tmp<0) {
        tmp *= -1;
        flag = 1;
    }
    int i=0;
    while(i<8) {
        ans[i] = tmp%2;
        tmp /= 2;
        i++;
    }
    if(flag) {
        for(int j=0; j<8; j++) {
            if(ans[j]==0) {
                ans[j] = 1;
            }
            else {
                ans[j] = 0;
            }
        }
        ans[0] += 1;
        for(int j=0; j<8; j++) {
            if(ans[j]>1) {
                ans[j] -= 2;
                ans[j+1] += 1;
            }
        }
    }
    for(int j=7; j>=0; j--) {
        cout << ans[j];
    }
    cout << "\n";

    return 0;

}