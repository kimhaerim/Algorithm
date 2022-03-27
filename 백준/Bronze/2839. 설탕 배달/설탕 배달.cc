#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;


    int arr[n+1];
    memset(arr, 0, sizeof(arr));
    arr[3] = arr[5] = 1;

    for (int i = 6; i <= n; i++) {
        if(arr[i-3]) {
            arr[i] = arr[i - 3] + 1;
        }
        if (arr[i - 5]) {
            if(arr[i]) {
                arr[i] = min(arr[i - 5] + 1, arr[i]);
            }
            else{
                arr[i] = arr[i - 5] + 1;
            }
        }
    }

    if(arr[n] == 0) cout << "-1";
    else cout << arr[n];
    return 0;
}
