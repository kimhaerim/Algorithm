#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    queue<int> q;
    int result[n];
    int j = 0;
    int num = 0;

    for(int i = 1; i <= n; i++){
        num++;
        if(num == k){
            num = 0;
            result[j] = i;
            j++;
        }
        else q.push(i);
    }
    while(!q.empty()){
        num++;
        if(num == k){
            num = 0;
            result[j] = q.front();
            q.pop();
            j++;
        }
        else{
            q.push(q.front());
            q.pop();
        }
    }

    cout << "<";
    for(int i =0; i < n-1; i++)
        cout << result[i] << ", ";
    cout << result[n-1] << ">";
    return 0;
}
