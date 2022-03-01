#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    memset(arr, 0, n);

    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;

    for(int i = 4; i <= n; i++){
        arr[i] = (arr[i-1] + arr[i-2]) % 15746;
    }
    cout << arr[n];
    return 0;
}
