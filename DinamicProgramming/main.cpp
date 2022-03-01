#include <iostream>
using namespace std;

long long arr[10001];

long long fibo(int x){
    if(x <=2)
        return 1;
    if(arr[x] != 0) {
        return arr[x];
    }
    else {
        arr[x] = fibo(x - 1) + fibo(x - 2);
        return arr[x];
    }
}
int main() {
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}
