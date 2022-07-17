#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num;
    int result[11];
    memset(result, 0, 11);

    result[1] = 1;
    result[2] = 2;
    result[3] = 4;

    int res;
    for(int i = 0; i < n; i++){
        cin >> num;
        for(int j = 4; j <= num; j++){
            result[j] = result[j-1] + result[j-2] + result[j-3];
        }
        cout << result[num] << endl;
    }
    return 0;
}
