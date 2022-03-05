#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;

    bool visited[numbers.size()];
    memset(visited, false, sizeof(visited));

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < numbers.size(); j++){
            if(numbers[i] )
        }
    }
    return answer;
}

int main() {
    vector<int> numbers = {1,1,1,1,1};
    int target = 3;
    solution(numbers, target);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
