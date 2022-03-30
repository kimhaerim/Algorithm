#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> time;
    int hour1, hour2;

    for (int i = 0; i < n; i++) {
        cin >> hour1 >> hour2;
        time.push_back({hour2, hour1});
    }

    sort(time.begin(), time.end());
    int result = 1;
    int saveTime = time[0].first;
    for (int i = 1; i < n; i++) {
        if(saveTime <= time[i].second) {
            saveTime = time[i].first;
            result++;
        }
    }

    cout << result;
    return 0;
}
