#include <string>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> work;

    for (int i = 0; i < progresses.size(); i++) {
        int num = 100 - progresses[i];
        if(num % speeds[i] != 0){
            work.push(num / speeds[i] + 1);
        }
        else
            work.push(num / speeds[i]);
    }

    int day = work.front();
    int cnt = 0;

    while (!work.empty()) {
        if(day < work.front()) {
            answer.push_back(cnt);
            day = work.front();
            cnt = 0;
        }
        else {
            cnt++;
            work.pop();
        }
    }
    if (cnt != 0) {
        answer.push_back(cnt);
    }

    return answer;
}