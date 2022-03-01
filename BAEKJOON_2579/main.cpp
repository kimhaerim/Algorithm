#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int score[n];
    int result[n];

    for(int i = 0; i < n; i++)
        cin >> score[i];

    result[0] = score[0];
    result[1] = max(score[0] + score[1], score[1]);
    result[2] = max(score[0] + score[2], score[1] + score[2]);

    for(int i = 3; i < n; i++){
        result[i] = max(result[i-2] + score[i], result[i-3] + score[i] + score[i-1]);
    }
    cout << result[n-1];
    return 0;
}
