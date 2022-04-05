#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int solution(int k, int n){
    if(k == 0)
        return n;
    else if(n == 1)
        return 1;
    return (solution(k - 1, n) + solution(k, n - 1));
}

int main() {
    int t, k, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> k >> n;

        cout << solution(k, n) << "\n";
    }

    return 0;
}
