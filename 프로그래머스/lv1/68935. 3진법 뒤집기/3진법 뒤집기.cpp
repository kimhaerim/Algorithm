#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int solution(int n) {
    vector<int> v;
    int answer = 0;
    while(n){
        v.push_back(n%3);
        n = n/3;
    }
    
    reverse(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++){
        answer += v[i] * pow(3 ,i);
    }
    return answer;
}