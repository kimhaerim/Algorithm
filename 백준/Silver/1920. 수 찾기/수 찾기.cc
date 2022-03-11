#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> A;
int n, m;

int BSearch(int target){
    int low = 0;
    int high = n -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(A[mid] == target)
            return 1;
        else if(A[mid] > target)
            high = mid - 1;
        else low = mid +1;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin >> n;

    for(int i =0; i < n; i++){
        cin >> num;
        A.push_back(num);
    }

    sort(A.begin(), A.end());

    cin >> m;
    for(int i = 0; i < m; i++){
        int num;
        cin >> num;
        cout << BSearch(num) << "\n";
    }

    return 0;
}
