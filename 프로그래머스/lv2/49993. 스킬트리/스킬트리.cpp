#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    map<char, int> tree;

    for (int i = 0; i < skill.length(); i++) {
        tree.insert({skill[i], i+1});
    }

    for(auto skt : skill_trees){
        int cnt =1;
        bool check = true;

        for (int i = 0; i < skt.length(); i++) {
            if(tree[skt[i]] > cnt){
                check = false;
                break;
            }
            else if(tree[skt[i]] == cnt)
                cnt++;
        }
        if(check)
            answer++;
    }

    return answer;
}
