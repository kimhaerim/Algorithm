#include <iostream>
#include <cmath>
using namespace std;


int main() {
    bool check[10000] = {true, };

    check[0] = false;
    check[1] = false;

    int sum = 0;
    int min = -1;
    int m, n;
    cin >> m >> n;

    for (int i = 2; i <= sqrt(n); i++) {
        if(check[i]){
            for (int j = i + i; j <= n; j+= i) {
                check[j] = false;
            }
        }
    }

    for (int i = m; i <= n; i++) {
        if(check[i]) {
            if(sum == 0) {
                min = i;
            }
            sum += i;
        }
    }

    if(sum != 0) {
        cout << sum << "\n" << min;
    }
    else
        cout << -1;
    return 0;
}
