#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, cnt = 0;
int graph[25][25] = {0,};
bool visited[25][25] = {false,};
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
queue<pair<int,int>> q;
vector<int> result;

void bfs(int x, int y){
    q.push(make_pair(x,y));
    visited[x][y] = true;
    cnt++;

    while (!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int newx = x + dx[i];
            int newy = y + dy[i];
            if(newx < 0 || newx >= n || newy < 0 || newy >= n) continue;
            if(!visited[newx][newy] && graph[newx][newy] == 1){
                q.push(make_pair(newx, newy));
                visited[newx][newy] = true;
                cnt++;
            }
        }
    }
}

void dfs(int x, int y){
    cnt++;
    visited[x][y] = true;
    for(int i = 0; i < 4; i++){
        int newx = x + dx[i];
        int newy = y + dy[i];
        if(newx < 0 || newx >= n || newy < 0 || newy >= n) continue;
        if(!visited[newx][newy] && graph[newx][newy] == 1){
            dfs(newx, newy);
        }
    }
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        for(int j = 0; j < n; j++){
            graph[i][j] = temp[j] - '0';
        } //입력 받기
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j] && graph[i][j] == 1){
                cnt = 0;
//                bfs(i,j);
                dfs(i,j);
                result.push_back(cnt);
            }
        }

    }

    cout << result.size() << endl;
    sort(result.begin(), result.end());
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << "\n";
    }
    return 0;
}
