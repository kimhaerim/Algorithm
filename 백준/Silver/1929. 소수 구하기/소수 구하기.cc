#include <iostream>
#include <math.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >>m >> n;
    bool prime[1000001] = {false,};

    for (int i = 2; i <= n; i++) {
        prime[i] = true;
    }

    prime[1] = false;

    for (int i = 2; i <= sqrt(n); i++) {
        if(prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }

    for (int i = m; i <= n; i++) {
        if(prime[i]) {
            cout << i << "\n";
        }
    }


    return 0;
}
