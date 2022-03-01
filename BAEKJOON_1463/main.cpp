#include <iostream>

using namespace std;
int arr[1000001] = {0,};
int solution(int num){
    if(num == 1)
        return 0;
    else if(arr[num] != 0){
        return arr[num];
    }
    int res = 1 + solution(num -1);
    if(num % 3 == 0) res = min(res, 1+solution(num/3));
    else if(num% 2 == 0) res = min(res, 1+solution(num/2));
    arr[num] = res;
    return res;
}

int main() {
    int n;

    cin >> n;

    cout << solution(n);

    return 0;
}
