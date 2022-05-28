#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c[80];
    int count = 0;
    int sum = 0;
    for(int i=0; i < n; i++){
        cin >> c;
        for(int j = 0; j < strlen(c); j++){
            if(c[j] == 'O'){
                count++;
                sum += count;
            }
            else
                count = 0;
        }
        cout << sum << endl;
        count = 0;
        sum = 0;
    }
    return 0;
}
