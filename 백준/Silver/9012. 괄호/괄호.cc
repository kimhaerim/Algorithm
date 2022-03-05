#include <iostream>
#include <stack>
using namespace std;

void Check(string str){
    stack<char> PS;
    for(int j = 0; j < str.size(); j++){
        if(str[j] == '('){
            PS.push('(');
        }
        else if(str[j] == ')'){
            if(!PS.empty()){
                PS.pop();
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
    }

    if(PS.empty())
        cout << "YES" << endl;
    else {
        cout << "NO" << endl;
    }
}
int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string str;
        cin >> str;
        Check(str);
    }
    return 0;
}
