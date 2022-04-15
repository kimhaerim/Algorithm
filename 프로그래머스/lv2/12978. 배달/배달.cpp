#include <vector>
#include <queue>
using namespace std;
 
 
vector<pair<int, int>> v[51];
vector<int> Dist;

void dijkstra(int n){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({1,0});
    Dist[1] = 0;

    while (!pq.empty()) {
        int current = pq.top().first;
        int cost = pq.top().second;
        pq.pop();

        for (int i = 0; i < v[current].size(); i++) {
            int next = v[current][i].first;
            int ncost = v[current][i].second;

            if(Dist[next] > Dist[current]+ ncost) {
                Dist[next] = Dist[current] + ncost;
                pq.push({next, ncost});
            }
        }
    }
}

int solution(int N, vector<vector<int>> road, int K) {
    int answer = 0;
    Dist.resize(N + 1, 987654321);
//    무한대로 초기화
    for (int i = 0; i < road.size(); i++) {
        int n1 = road[i][0];
        int n2 = road[i][1];
        int dist = road[i][2];
        v[n1].push_back({n2, dist});
        v[n2].push_back({n1, dist});
    }

    dijkstra(N);
    for (int i = 1; i <= N; i++) {
        if(Dist[i] <= K)
            answer++;
    }
    return answer;
}
