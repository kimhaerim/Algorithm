#include <iostream>
#include <stack>
using namespace std;

int main() {
    int k;
    cin >> k;
    int sum = 0;
    stack<int> stack;
    for(int i = 0; i < k; i++){
        int x;
        cin >> x;
        if(x != 0) {
            stack.push(x);
            sum += x;
        }

        if(x == 0){
            sum -= stack.top();
            stack.pop();
        }
    }

    cout << sum;
    return 0;
}
