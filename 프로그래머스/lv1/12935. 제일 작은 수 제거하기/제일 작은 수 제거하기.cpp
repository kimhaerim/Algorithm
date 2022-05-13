#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = 100000;
    if(arr.size() == 1){
        answer.push_back(-1);
        return answer;
    }
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < min)
            min = arr[i];
    }
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != min)
            answer.push_back(arr[i]);
    }
    return answer;
}