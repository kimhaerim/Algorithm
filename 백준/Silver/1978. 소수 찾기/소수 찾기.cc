#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    int cnt = 0;
    int result = 0;
    int num;
    for (int i = 0; i < n; i++) {
        cnt=0;
        cin >> num;

        for (int j = 1; j <= num; j++) {
            if(num % j == 0)
                cnt++;
        }
        if(cnt == 2) {
            result++;
        }
    }
    cout << result;
    return 0;
}
