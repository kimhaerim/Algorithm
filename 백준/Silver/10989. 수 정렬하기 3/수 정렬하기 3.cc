#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int num;
    int arr[10001] = {0,};

    for (int i = 0; i < n; i++) {
        cin >> num;
        arr[num]++;
    }

    for (int i = 0; i < 10001; i++) {
        while(arr[i] != 0) {
            cout << i << "\n";
            arr[i]--;
        }
    }
    return 0;
}
