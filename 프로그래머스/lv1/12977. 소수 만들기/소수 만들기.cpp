#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    } else if (n == 2 || n == 3) {
        return true;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int solution(vector<int> nums){
    int answer = 0;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            for (int z = j + 1; z < nums.size(); z++) {
                if(isPrime(nums[i] + nums[j] + nums[z])) {
                    answer++;
                }
            }
        }
    }
    return answer;
}