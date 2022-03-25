#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr;
    int num;
    for (int i = 0; i < 3; i++) {
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());
    int result = 0;

    if(arr[0] == arr[1] && arr[1] == arr[2]) {
        result += 10000 + arr[0] * 1000;
    }
    else if(arr[0] == arr[1] ) {
        result += 1000 + arr[0] * 100;
    }
    else if(arr[1] == arr[2]) {
        result += 1000 + arr[1] * 100;
    }
    else {
        result += arr[2] * 100;
    }


    cout << result;

    return 0;
}
