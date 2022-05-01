#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    vector<int> v;

    for (int i = left; i <= right; i++) {
        v.push_back(i);
    }

    for (int i = 0; i < v.size(); i++) {
        int cnt = 0;
        int value = v[i];
        for (int j = 1; j <= value; j++) {
            if (value % j == 0) {
                cnt++;
            }
        }
        if(cnt % 2 == 0) {
            answer += value;
        } else {
            answer -= value;
        }
    }
    return answer;
}