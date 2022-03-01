#include <iostream>
using namespace std;

int solution(string str){
    int sum = 0;
    int cnt = 0;

    for(int j = 0; j < str.length(); j++){
        if(str[j] == 'O'){
            cnt++;
            sum+=cnt;
        }
        else cnt = 0;

    }
    cout << sum << endl;
    return sum;
}
int main() {
    int n;
    cin >> n;
    string str;
    for(int i = 0; i < n; i++){
        cin >> str;
        solution(str);
    }
    return 0;
}
