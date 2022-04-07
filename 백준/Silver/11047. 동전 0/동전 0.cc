#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> money;
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        money.push_back(num);
    }

    int cnt = 0;
    for (int i = n - 1; i >= 0; i--) {
        cnt += k / money[i];
        k %= money[i];
        if (k == 0) {
            break;
        }
    }
    cout << cnt;
    return 0;
}
