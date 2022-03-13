#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n;
    cin >> n;
    priority_queue<int> arr;
    int num;

    for(int i = 0; i < n; i++){
        cin >> num;
        if(num == 0) {
            if(arr.empty()) {
                cout << "0\n";
            }
            else{
                cout << arr.top() << "\n";
                arr.pop();
            }
        }
        else {
            arr.push(num);
        }
    }



    return 0;
}
