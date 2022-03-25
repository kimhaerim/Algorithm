#include <iostream>
using namespace std;

int main() {
    int hour, min, total;
    cin >> hour >> min >>total;

    min += total;

    if(min > 59) {
        hour += min / 60;
        min = min % 60;
    }
    if(hour > 23) {
        hour %= 24;
    }
    cout << hour <<" " << min;
    return 0;
}
