#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";

    unordered_map<string, int> hash;

    for(string name : participant){
        hash[name]++;
    }

    for(string name : completion){
        hash[name]--;
    }

    for(auto player : hash){
        if(player.second > 0){
            answer = player.first;
            break;
        }
    }

    return answer;
}