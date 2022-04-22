using namespace std;

int gcd(int a, int b){
    int c;
    
    while(b != 0){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

long long solution(int w,int h) {
    long long answer = 1;
    long long width = w;
    long long height = h;
    
    long long total = width * height;
    int gcdValue = gcd(w,h);
    answer = total - (width + height -gcdValue);
    return answer;
}