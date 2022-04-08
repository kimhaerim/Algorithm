#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int,int>> time;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        time.push_back({p, i+1});
    }

    stable_sort(time.begin(), time.end());

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            sum += time[j].first;
        }
    }

    cout << sum;
    return 0;
}
