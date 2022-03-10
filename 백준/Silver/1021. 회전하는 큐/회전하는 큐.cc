#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        dq.push_back(i);
    }

    int cnt = 0;
    int index;
    for(int i =0; i < m; i++){
        int num;
        cin >> num;

        for(int j = 0; j < dq.size(); j++){
            if(dq[j] == num){
                index = j;
                break;
            }
        }

        if(index < dq.size() - index){
            while (1){
                if(dq.front() == num){
                    dq.pop_front();
                    break;
                }
                ++cnt;
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else {
            while(1){
                if(dq.front() == num){
                    dq.pop_front();
                    break;
                }
                ++cnt;
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    cout << cnt;
    return 0;
}
