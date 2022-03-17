#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int t, n,m,k;
int Graph[51][51];
bool visited[51][51];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

void bfs(int x, int y){
    visited[x][y] = true;
    queue<pair<int,int>> q;
    q.push({x,y});

    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;

        q.pop();

        for(int i = 0; i < 4; i++){
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if(new_x < 0 || new_y < 0 || new_x >= n || new_y >= m)
                continue;
            if(!visited[new_x][new_y] && Graph[new_x][new_y]){
                q.push({new_x, new_y});
                visited[new_x][new_y] = 1;
            }
        }
    }
}

int main() {
    cin >> t;

    int to, from;
    while(t > 0){
        cin >> n >> m >> k;
        for(int i = 0; i < k; i++){
            cin >> to >> from;
            Graph[to][from] = 1;
        }
        int cnt = 0;
        for(int i= 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visited[i][j] && Graph[i][j]){
                    bfs(i, j);
                    cnt++;
                }
            }
        }
        memset(visited,false, sizeof(visited));
        memset(Graph,0, sizeof(Graph));
        cout << cnt << "\n";
        t--;
    }
    return 0;
}
