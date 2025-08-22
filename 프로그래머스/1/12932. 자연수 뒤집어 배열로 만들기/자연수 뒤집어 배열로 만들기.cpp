#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    
    long long temp = n;
    int len = 0;
    if (temp == 0) len = 1;   
    while (temp > 0) {
        temp /= 10;
        len++;
    }

    vector<int> answer(len);
    for (int i = 0; i < len; i++) {
        answer[i] = n % 10;
        n /= 10;
    }

    return answer;
}