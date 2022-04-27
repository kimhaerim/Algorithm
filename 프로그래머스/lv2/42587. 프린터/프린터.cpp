#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer, count = 0;
    queue<pair<int,int>> q;
    priority_queue<int> pq;

    for (int i = 0; i < priorities.size(); i++) {
        q.push({i, priorities[i]});
        pq.push(priorities[i]);
    }

    while (!q.empty()) {
        int index = q.front().first;
        int value = q.front().second;
        q.pop();

        if (pq.top() == value) {
            pq.pop();
            count++;
            if (index == location) {
                answer = count;
                break;
            }
        }
        else
            q.push({index, value});
    }

    return answer;
}