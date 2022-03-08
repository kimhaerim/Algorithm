#include <iostream>
#include <queue>
using namespace std;

int main() {
    int t;
    int n, m;
    int printNum = 0;
    queue<pair<int,int>> q;
    priority_queue<int> pq;

    cin >> t ;
    for(int i =0; i < t; i++){
        queue<pair<int,int>> q;
        priority_queue<int> pq;

        printNum = 0;
        cin >> n >> m;

        for(int j = 0; j < n; j++){
            int num;
            cin >> num;
            q.push(make_pair(j,num));
            pq.push(num);
        }

        while(!q.empty()){
            int index = q.front().first;
            int priority = q.front().second;
            q.pop();

            if(pq.top() == priority){
                printNum++;
                pq.pop();
                if(index == m){
                    cout << printNum << "\n";
                    break;
                }
            }
            else
                q.push({index, priority});
        }
    }

    return 0;
}
