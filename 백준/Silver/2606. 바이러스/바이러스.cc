#include <iostream>
#include <queue>
using namespace std;

int n, m;
int graph[101][101];
bool visited[101];
int cnt = 0;

int dfs(int start){

    visited[start] = true;
    for(int i = 1; i <= n; i++){
        if(!visited[i] && graph[i][start]){
            cnt++;
            dfs(i);
        }
    }
    return cnt;
}

int bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        start= q.front();
        q.pop();
        for(int i = 1; i <= n; i++){
            if(!visited[i] && graph[i][start]){
                q.push(i);
                cnt++;
                visited[i] = true;
            }
        }
    }
    return cnt;
}

int main() {
    cin >> n >> m;
    int to, from;
    for(int i = 0; i < m; i++){
        cin >> to >> from;
        graph[to][from] = graph[from][to] = 1;
    }

//    cout << dfs(1);
    cout << bfs(1);
    return 0;
}
