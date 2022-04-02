#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, string> a, pair<int,string> b){
    return a.first < b.first;
}

int main() {

    int n;
    cin >> n;
    vector<pair<int, string>> people;
    for(int i = 0; i < n; i++){
        int num;
        string str;
        cin >> num >> str;

        people.push_back(make_pair(num, str));
    }

    stable_sort(people.begin(), people.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << people[i].first << " " << people[i].second << "\n";
    }
    return 0;
}
