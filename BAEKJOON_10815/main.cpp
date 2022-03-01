#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    bool searched = false;
    cin >> n;
    int have[n];

    for(int i = 0; i < n; i++)
        cin >> have[i];

    cin >> m;
    int arr[m];

    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }

    sort(have, have+n);

    //이진탐색
    for(int i = 0; i < m; i++){
        int high, low, mid;
        high = n -1;
        low = 0;
        while(low <= high){
            mid = (low + high)/2;
            if(have[mid] == arr[i]){
                searched = true;
                break;
            }
            else if(have[mid] > arr[i])
                high = mid -1;
            else low = mid +1;
        }
        if(!searched) cout << 0 << " ";
        else{
            cout << 1 << " ";
            searched = false;
        }
    }
    return 0;
}
