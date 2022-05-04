#include <string>
#include <iostream>
using namespace std;


bool solution(string s)
{
    bool answer = false;
    
    int arr[2] = {0,0};
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == 'P' or s[i] == 'p') {
            arr[0]++;
        }
        else if(s[i] == 'Y' or s[i] == 'y') {
            arr[1]++;
        }
    }

    if (arr[0] == arr[1]) {
        answer = true;
    }

    return answer;
}
