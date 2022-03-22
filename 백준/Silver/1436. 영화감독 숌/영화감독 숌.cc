#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    int result = 665;
    string str;

    while(1){
        str = to_string(result);

        if(str.find("666") != -1) {
            cnt++;
        }
        if(cnt == n){
            cout << result;
            break;
        }
        result++;
    }

    return 0;
}
