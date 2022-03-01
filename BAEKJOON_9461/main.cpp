#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num;
    long long arr[101];
    memset(arr, 0, 101);

    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 2;

    for(int j = 0; j < n; j++){
        cin >> num;
        for(int i = 6; i <= num; i++){
            arr[i] = arr[i -3] + arr[i -2];
        }
        cout << arr[num] << endl;
    }

    return 0;
}
