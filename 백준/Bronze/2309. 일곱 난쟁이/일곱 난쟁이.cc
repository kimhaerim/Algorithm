#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> height;

    int sum = 0;
    for (int i = 0; i < 9; i++) {
        int num;
        cin >> num;
        height.push_back(num);
        sum += height[i];
    }

    sort(height.begin(), height.end());


    for (int i = 0; i < 9; i++) {
        for (int j = i; j < 9; j++) {
            if(sum - height[i] - height[j] == 100) {
                for (int z = 0; z < 9; z++) {
                    if(height[z] == height[i] || height[z] == height[j]) continue;
                    cout << height[z] << "\n";
                }
                return 0;
            }
        }
    }
    return 0;
}
