#include <iostream>
using namespace std;


int main() {
    int x, y;
    cin >> x >> y;

    string week[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    for(int i = 0; i < x; i++){
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            y+=31;
        else if(i == 2)
            y+=28;
        else if(i == 4 || i == 6 || i == 9|| i == 11)
            y+=30;
    }

    cout << week[y%7];
    return 0;
}
