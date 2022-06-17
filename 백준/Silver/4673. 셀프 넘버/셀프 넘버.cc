#include <iostream>
using namespace std;

int checkSelf(int n){
    int sum = n;
    while(n != 0){
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int main() {
    int selfNum[10001] = {0,};
    int check;
    for (int i = 1; i < 10001; i++) {
        check = checkSelf(i);
        if (check < 10001)
            selfNum[check] = 1;
    }

    for (int i = 1; i < 10001; i++) {
        if (selfNum[i] != 1)
            cout << i << endl;
    }
    return 0;
}
