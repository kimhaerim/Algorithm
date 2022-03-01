#include <iostream>
using namespace std;

int BSearch(int arr[], int size, int target){
    int high = size -1;
    int low = 0;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] > target)
            high = mid -1;
        else low = mid + 1;
    }
    return -1;
}
int main() {
    int data[] = {1,3,6,8,11,23,111,114,213};
    int dataSize = sizeof(data) / sizeof(int);
    int ans = BSearch(data, dataSize, 3);
    cout << ans;
    return 0;
}
