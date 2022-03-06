#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (int i = 0; i < str.length(); i++) {
        int val = str[i] - 'A'- 3;
        if(val < 0) val += 26;
        cout << alphabet[val];
    }
    return 0;
}
