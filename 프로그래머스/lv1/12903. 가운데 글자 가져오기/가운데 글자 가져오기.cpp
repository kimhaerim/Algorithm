#include <string>
#include <vector>
#include <cstring>

using namespace std;

string solution(string s) {
    string answer = "";
    if(s.size() % 2 == 1){
        //홀수
        answer = s.substr(s.size()/2, 1);
    }
    else {
        //짝수
        answer = s.substr(s.size()/2-1, 2);
    }
    
    
    
    return answer;
}