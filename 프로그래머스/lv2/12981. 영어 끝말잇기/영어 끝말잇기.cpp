#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;

    bool flag = 0;
    for (int i = 1; i < words.size(); i++) {
        string str1 = words[i-1];
        string str2 = words[i];

        for (int j = 0; j < i; j++) {
            if (words[j] == words[i]) {
                flag = 1;
                break;
            }
        }

        if(str1[str1.length()-1] != str2[0])
            flag = 1;

        if(flag){
            answer.push_back(i % n + 1);
            answer.push_back(i / n + 1);
            return answer;
        }
    }

    answer.push_back(0);
    answer.push_back(0);

    return answer;
}