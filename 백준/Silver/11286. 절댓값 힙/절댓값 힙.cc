#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int main(){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    // 우선순위, 값

    int n, num;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        if(num == 0){
            if(q.empty())
                cout << "0\n";
            else{
                cout << q.top().second << "\n";
                q.pop();
            }
        }
        else {
            q.push(make_pair(abs(num), num));
        }
    }
    return 0;
}
