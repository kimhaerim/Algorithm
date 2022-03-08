#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        if(str == "push"){
            int x;
            cin >> x;
            q.push(x);
        }
        else if(str == "pop"){
            if(q.size() == 0) cout << "-1\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(str == "size")
            cout << q.size() << "\n";
        else if(str == "empty")
            cout << q.empty() << "\n";
        else if(str == "front"){
            if(q.empty()) cout << "-1\n";
            else cout << q.front() << "\n";
        }
        else if(str=="back") {
            if (q.empty()) cout << "-1\n";
            else cout << q.back() << "\n";
        }
    }
    return 0;
}
