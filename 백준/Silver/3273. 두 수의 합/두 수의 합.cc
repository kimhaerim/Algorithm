#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num, cnt = 0;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> num;
        arr.push_back(num);
    }

    int x;
    cin >> x;

    sort(arr.begin(), arr.end());

    int start = 0, end = n-1;

    int sum = 0;

    while(start < end){
        if(arr[start] + arr[end] == x){
            cnt++;
            end--;
        }
        else if(arr[start] + arr[end] > x){
            end--;
        }
        else
            start++;
    }
    cout << cnt;
    return 0;
}
