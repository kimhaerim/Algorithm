#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int MAX = 1001;
int n,m,v;
int Graph[MAX][MAX];
bool visited[MAX]={false};

void DFS(int start){
    visited[start] = true;
    cout << start << " ";

    for(int i =1; i <= n; i++){
        if(!visited[i] && Graph[start][i]){
            DFS(i);
        }
    }
}

void BFS(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        start = q.front();
        cout << start << " ";
        q.pop();
        for(int i = 1; i <= n; i++){
            if(!visited[i] && Graph[start][i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}
int main() {
    cin >> n >> m >> v;
    int from, to;
    for(int i = 0; i < m; i++){
        cin >> from >> to;
        Graph[from][to] = Graph[to][from] = 1;
    }

    DFS(v);
    memset(visited, false, MAX);
    cout << endl;
    BFS(v);
    return 0;
}
