#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int n, m, num;
    vector<int> arr;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> num;
        int cnt = upper_bound(arr.begin(), arr.end(), num) - lower_bound(arr.begin(), arr.end(), num);
        cout << cnt << " ";
    }
    return 0;
}
