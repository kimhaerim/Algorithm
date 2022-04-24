#include <string>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;

    int num = nums.size()/2;

    set<int> arr;
    for (int i = 0; i < nums.size(); i++) {
        arr.insert(nums[i]);
    }

    if (arr.size() <= num) {
        answer = arr.size();
    }
    else
        answer = num;

    return answer;
}