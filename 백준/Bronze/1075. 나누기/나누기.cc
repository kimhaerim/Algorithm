#include <iostream>
using namespace std;

int main() {
    int n, f;
    cin >> n >> f;
    int cnt = 00;

    n -= n % 100;

    while(1) {
        if(n % f == 0){
            break;
        }
        n ++;
        cnt++;
    }
    if(cnt < 10)
        cout << "0" << cnt;
    else{
        cout << cnt;
    }

    return 0;
}
