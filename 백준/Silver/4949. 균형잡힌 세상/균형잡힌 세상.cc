#include <iostream>
#include <stack>
using namespace std;

string check(string str){
    stack<char> result;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '('){
            result.push('(');
        }
        else if(str[i] == '['){
            result.push('[');
        }
        else if((str[i] == ')' || str[i] == ']') && result.empty()) {
            return "no";
        }
        else if((str[i] == ')' && result.top() != '(') || (str[i] == ']' && result.top() != '['))
            return "no";
        else if((str[i] == ')' && (result.top() == '(' || !result.empty()))
                || (str[i] == ']' && (result.top() == '[' || !result.empty())))
            result.pop();
    }
    if(result.empty())
        return "yes";
    else
        return "no";
}

int main() {
    string str;
    getline(cin, str);

    while(str != "."){
        cout << check(str);
        cout << endl;
        getline(cin, str);
    }
    return 0;
}
