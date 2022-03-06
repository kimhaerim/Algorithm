#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<char> check;

bool solution(int n, vector<int> arr){
    stack<int> value;
    int cnt = 0;
    int num = 0;
    for(int i = 1; i <= n; i++){
        value.push(i);
        check.push_back('+');
        cnt++;
        if(arr[num] == i){
            value.pop();
            check.push_back('-');
            num++;
            cnt++;
            for(int j = num; j <= i; j++){
                if(!value.empty()){
                    if(arr[j] == value.top()){
                        value.pop();
                        check.push_back('-');
                        num++;
                        cnt++;
                    }
                    else break;
                }
            }
        }
    }
    if(value.empty()) return true;
    int loop = n - value.size();
    for(int i = 0; i < loop; i++) {
        if(value.top() == arr[num]){
            value.pop();
            num++;
            check.push_back('-');
        }
        else return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    stack<int> value;
    vector<int> arr;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    if(solution(n, arr)){
        for(int i = 0; i < check.size(); i++)
            cout << check[i] << "\n";
    }
    else {
        cout << "NO";
    }

    return 0;
}