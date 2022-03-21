#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int human[n][2];
    for(int i = 0; i < n; i++){
        cin >> human[i][0] >> human[i][1];
    }
    for(int i = 0; i < n; i++){
        int cnt = 1;
        for(int j = 0; j < n; j++)
        if(human[i][0] < human[j][0] && human[i][1] < human[j][1]){
            cnt++;
        }
        cout << cnt << " ";
    }
    return 0;
}
