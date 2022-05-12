#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int temp = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            if(temp % 2 == 0)//대문자로
                answer += toupper(s[i]);
            else
                answer += tolower(s[i]);
            temp++;
        }
        else {
            answer += ' ';
            temp = 0;
        }
    }
    return answer;
}