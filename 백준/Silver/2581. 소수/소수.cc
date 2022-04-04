#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int min,max,sum = 0;
    int min_value;
    bool prime[10000];
    fill_n(prime, 10000, 1);
    prime[0] = false;
    prime[1] = false;
    cin >> min;
    cin >> max;
    for (int i = 2; i <= sqrt(max); i++)
        if(prime[i] == true)
            for(int j = i*2; j <= max; j += i)
                prime[j] = false;

    for (int i = min; i <= max; i++)
        if(prime[i] == true)
        {
            if(sum == 0)
                min_value = i;
            sum += i;
        }
    if(sum == 0)
        cout << "-1";
    else
        cout << sum << '\n' << min_value;
    return 0;
}