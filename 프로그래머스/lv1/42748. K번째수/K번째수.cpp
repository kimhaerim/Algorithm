#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> result;

    for(int num = 0; num < commands.size(); num++){
        vector<int> answer;
        int i, j, k;
        i = commands[num][0];
        j = commands[num][1];
        k = commands[num][2];

        for (int z = i-1; z < j; z++){
            answer.push_back(array[z]);
        }
        sort(answer.begin(), answer.end());
        result.push_back(answer[k-1]);
    }

    return result;
}