#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max_count;
    int dp[n];
    memset(dp, 0, sizeof(dp));
    max_count = 0;
    for(int i = 0; i < n; i++){
        int num;
        for(int j = 0; j <= max_count; j++){
            cin >> num;
            dp[i] = max(dp[i],num);
        }
    }

    int sum = 0;

    for(int i = 0; i < n; i++)
        sum += dp[i];
    cout << sum;

    return 0;
}
