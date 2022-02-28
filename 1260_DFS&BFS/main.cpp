#include <iostream>
#include <queue>

using namespace std;

const int MAX = 1001;
int N,M,V;
int Graph[MAX][MAX] = {0,};
bool visted[MAX]= {false, };

void dfs(int idx){
    visted[idx] = 1;
    cout << idx << " ";
    for(int i = 1; i <= N; i++){
        if(!visted[i] && Graph[idx][i]){
            dfs(i);
        }
    }
}

void bfs(int idx){
    queue<int> q;
    q.push(idx);
    visted[idx] = 1;

    while(!q.empty()){
        idx = q.front();
        cout << idx << " ";
        q.pop();
        for(int i = 1; i <= N; i++) {
            if (!visted[i] && Graph[idx][i]) {
                q.push(i);
                visted[i] = 1;
            }
        }
    }
}

int main(){
    int from,to;
    cin >> N >> M >> V;

    for(int i =0; i < M; i++){
        cin >> from >> to;
        Graph[from][to] = Graph[to][from] = 1;
    }

    dfs(V);
    memset(visted, false, sizeof(visted));
    cout << endl;
    bfs(V);
    return 0;
}