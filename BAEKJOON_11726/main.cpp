#include <iostream>
#include <cstring>

using namespace std;


int main() {
    int n;

    cin >> n;
    int result[n];
    memset(result, 0, n);

    result[0] = 1;
    result[1] = 2;
    for(int i = 2; i <n; i++){
        result[i] = (result[i-2] + result[i-1]) % 10007;
    }
    cout << result[n-1];
    return 0;
}
