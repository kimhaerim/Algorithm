#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int a[5] = {1, 2, 3, 4, 5};
    int b[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int c[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    vector<int> cnt = {0, 0, 0};
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == a[i % 5]) {
            cnt[0]++;
        }
        if (answers[i] == b[i % 8]) {
            cnt[1]++;
        }
        if (answers[i] == c[i % 10]) {
            cnt[2]++;
        }
    }

    int max_index = max_element(cnt.begin(), cnt.end()) - cnt.begin();
    for (int i = 0; i < cnt.size(); i++) {
        if(cnt[i] == cnt[max_index]){
            answer.push_back(i + 1);
        }
    }
    return answer;
}