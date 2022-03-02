#include <iostream>
#include <queue>
using namespace std;

int testCase, m, n, k;
int visited[51][51]= {false,};
int graph[51][51] = { 0,};

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0,0,1,-1};

queue<pair<int,int>> q;

void dfs(int y, int x){
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= m || ny >= n)
            continue;
        if(graph[ny][nx] && !visited[ny][nx]){
            visited[ny][nx] = true;
            dfs(ny,nx);
        }

    }
}

void bfs(int x, int y){
    q.push(make_pair(x,y));
    visited[x][y] = true;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for(int i = 0; i < 4; i++){
            int newx = x + dx[i];
            int newy = y + dy[i];

            if(newx < 0 || newx >= n || newy < 0 || newy >= m )
                continue;
            if(graph[newx][newy] && !visited[newx][newy]){
                q.push(make_pair(newx, newy));
                visited[newx][newy] = true;
            }
        }
    }
}

int main() {
    cin >> testCase;
    int x, y;

    for(int test = 0; test < testCase; test++){
        cin >> m >> n >> k;
        int ans = 0;

        for(int j =0 ; j < k; j++){
            cin >> x >> y;
            graph[y][x] = 1;
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) {
                if(graph[i][j] && !visited[i][j]){
                    ans++;
                    visited[i][j] = true;
//                    dfs(i, j);
                    bfs(i, j);
                }
            }
        }
        cout << ans;
    }

    return 0;
}
