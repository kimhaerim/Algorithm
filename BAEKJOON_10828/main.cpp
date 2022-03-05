#include <iostream>
#include <cstring>
using namespace std;

int list[10001];
int s;
int push(int x){
    s++;
    list[s] = x;
    return x;
}

int pop(){
    if(s<0)
        return -1;
    int n = list[s];
    list[s] = 0;
    s--;
    return n;
}

int size(){
    return s+1;
}

int empty(){
    if(s < 0)
        return 1;
    else
        return 0;
}

int top(){
    if(s < 0)
        return -1;
    else return list[s];
}

int main() {
    int n;
    cin >> n;
    s = -1;
    memset(list, 0, sizeof(list));
    for(int i =0; i < n; i++){
        string temp;
        cin >> temp;
        if(temp == "push"){
            int x;
            cin >> x;
            push(x);
        }
        else if(temp == "pop"){
            cout << pop() << endl;
        }
        else if(temp == "size"){
            cout << size() << endl;
        }
        else if(temp == "empty"){
            cout << empty() << endl;
        }
        else if(temp == "top"){
            cout << top() << endl;
        }
    }
    return 0;
}
