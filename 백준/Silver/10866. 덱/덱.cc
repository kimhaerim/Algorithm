#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    int n;
    cin >> n;

    while(n > 0){
        string str;
        cin >> str;
        if(str == "push_back"){
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if(str == "push_front"){
            int x;
            cin >> x;
            dq.push_front(x);
        }
        else if(str == "pop_front"){
            if(dq.empty()) cout << "-1\n";
            else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if(str == "pop_back"){
            if(dq.empty()) cout << "-1\n";
            else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if(str == "size")
            cout << dq.size() << "\n";
        else if(str=="empty")
            cout << dq.empty() << "\n";
        else if(str == "front") {
            if (dq.empty()) cout << "-1\n";
            else cout << dq.front() << "\n";
        }
        else if(str == "back") {
            if(dq.empty()) cout << "-1\n";
            else cout << dq.back() << "\n";
        }
        n--;
    }
    return 0;
}
