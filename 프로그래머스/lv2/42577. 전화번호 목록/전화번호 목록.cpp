#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

bool solution(vector<string> phone_book)
{
    map<string, int> m;
    for (int i = 0; i < phone_book.size(); i++) {
        m[phone_book[i]] = 1;
    }
    for (int i = 0; i < phone_book.size(); i++) {
        string phone_num = "";
        for (int j = 0; j < phone_book[i].length() - 1; j++) {
            phone_num += phone_book[i][j];
            if(m[phone_num])
                return false;
        }
    }

    return true;
}