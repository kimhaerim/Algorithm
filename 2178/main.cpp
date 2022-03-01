#include <iostream>

using namespace std;

const int MAX = 100;
int Graph[MAX][MAX] = {0,};
bool vistied[MAX][MAX] = {false,};
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0,0,1,-1};

void dfs(int idx){
    vistied[idx] = 1;
    for(int i = 1; i <= n; i++){
        if(Graph[idx][i] && !vistied[i])
            dfs(i);
    }
}

int main() {
    cin >> n >> m;
    int Graph[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> Graph[i][j];
        }
    }
    return 0;
}
