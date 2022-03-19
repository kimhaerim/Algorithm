#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<int> arr;
    int num;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    int start = 0;
    int end = n-1;

    int result[2];
    int min = 2000000000;

    while(start < end) {
        int sum = arr[start] + arr[end];
        if(min > abs(sum)) {
            min = abs(sum);
            result[0] = arr[start];
            result[1] = arr[end];

            if(sum == 0){
                break;
            }
        }

        if(sum < 0) {
            start++;
        }
        else if(sum > 0) {
            end--;
        }
    }

    cout << result[0] << " " << result[1];

    return 0;
}
