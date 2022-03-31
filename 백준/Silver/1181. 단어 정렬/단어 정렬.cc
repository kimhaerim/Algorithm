#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int compare(string a, string b){
    if(a.length() == b.length()) {
        return a < b;
    }
    else{
        return a.length() < b.length();
    }
}

int main() {
    int n;
    cin >> n;

    vector<string> dict;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        dict.push_back(str);
    }

    sort(dict.begin(), dict.end(), compare);
    dict.resize(unique(dict.begin(), dict.end()) - dict.begin());

    for (int i = 0; i < dict.size(); i++) {
        cout << dict[i] << "\n";
    }

    return 0;
}
