#include <string>
#include <queue>
#include <vector>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;

    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i < scoville.size(); i++) {
        q.push(scoville[i]);
    }

    int sum = 0;
    while(q.top() < K && q.size() > 1) {
        sum = 0;
        answer++;
        int food = q.top();
        q.pop();
        int food2 = q.top();
        q.pop();
        sum = food + (food2 * 2);
        q.push(sum);
    }

    if (q.top() < K) {
        return -1;
    }
    return answer;
}