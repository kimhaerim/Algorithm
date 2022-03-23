#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int S(vector<int> a, vector<int> b){
    int result = 0;
    for (int i = 0; i < a.size(); i++) {
        result += (a[i] * b[i]);
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        b.push_back(num);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    cout << S(a, b);
    return 0;
}
