#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int value[1000001];
    value[1] = 0;

    for (int i = 2; i <= n; i++) {
        value[i] = value[i-1] + 1;
        if(i % 2 == 0){
            value[i] = min(value[i], value[i / 2] + 1);
        }
        if(i % 3 == 0){
            value[i] = min(value[i], value[i / 3] + 1);
        }
    }
    cout << value[n];

    return 0;
}
