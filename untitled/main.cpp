#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;

int n;
int Graph[26][26];
bool visited[26][26];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int cnt = 0;

int BFS(int x, int y){
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    visited[x][y] = true;
    cnt++;

    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i = 0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
            else if(!visited[nx][ny] && Graph[nx][ny]){
                visited[nx][ny] = true;
                q.push(make_pair(nx,ny));
                cnt++;
            }
        }
    }
}

int DFS(int x, int y){
    visited[x][y] = true;
    cnt++;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= n || ny >= n)
            continue;
        else if(!visited[nx][ny] && Graph[nx][ny]){
            DFS(nx, ny);
        }
    }
}

int main() {
    cin >> n;
    vector<int> result;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        for(int j = 0; j < n; j++){
            Graph[i][j] = temp[j] - '0';
        }
    }

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j] && Graph[i][j]){
                cnt = 0;
                BFS(i,j);
//                DFS(i, j);
                result.push_back(cnt);
            }
        }
    }
    memset(visited, false, sizeof(visited));
    sort(result.begin(), result.end());
    cout << result.size() << endl;
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << endl;
    return 0;
}