#include <iostream>
using namespace std;

int p,q;
int arr[10001] = {0,};
int solution(int p, int q){
    int cnt = 0;
    for(int i = 1; i <= p; i++){
        if(p%i == 0){
            arr[i] = i;
            cnt++;
        }
        if(cnt == q) {
            cout << i;
            return 0;
        }
    }
    cout << "0";
    return 0;
}
int main() {

    cin >> p >> q;
    solution(p, q);
    return 0;
}