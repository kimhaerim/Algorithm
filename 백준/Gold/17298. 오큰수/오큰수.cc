#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr;
    vector<int> result(n,0);
    stack<int> index;

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    for(int i = n-1; i >= 0; i--){
        while (!index.empty() && arr[i] >= index.top()){
            index.pop();
        }
        if(index.empty()){
            index.push(arr[i]);
            result[i] = -1;
        }
        else {
            result[i] = index.top();
            index.push(arr[i]);
        }
    }

    for(int i =0; i < result.size(); i++)
        cout << result[i] << " ";
    return 0;
}
