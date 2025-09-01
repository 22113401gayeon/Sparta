#include <vector>
using namespace std;

bool solution(int n) {
    vector<int> digits;
    long long temp = n;  

    while (temp > 0) {
        digits.push_back(temp % 10);
        temp /= 10;
    }

    int sum = 0;
    for (int d : digits) {
        sum += d;
    }

    return (n % sum == 0);
}