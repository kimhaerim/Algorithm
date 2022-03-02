#include <iostream>
#include <queue>
using namespace std;

int n,m;
int graph[101][101] = {0,};
bool visited[101][101] = {false,};
int dist[101][101] = {0, };

int dx[4]={1, -1, 0, 0}; // 좌우
int dy[4] = {0, 0, 1, -1}; //상하
queue<pair<int, int>> q;

void bfs(int x, int y){
    visited[x][y] = true;
    q.push(make_pair(x,y));

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int newx = x + dx[i];
            int newy = y + dy[i];
            if( (0 <= newx && n > newx) && (0 <= newy && m > newy)
            && !visited[newx][newy] && graph[newx][newy] == 1){
                visited[newx][newy] = true;
                q.push(make_pair(newx, newy));
                dist[newx][newy] = dist[x][y]+1;
//                printf("x : %d y : %d dist %d\n", newx,newy, dist[newx][newy]);
            }
        }
    }
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;

        for(int j = 0; j < m; j++){
            graph[i][j] = temp[j] - '0'; //문자열이므로
        }
    }
    dist[0][0] ++;
    bfs(0,0);
    cout << dist[n-1][m-1];
    return 0;
}
