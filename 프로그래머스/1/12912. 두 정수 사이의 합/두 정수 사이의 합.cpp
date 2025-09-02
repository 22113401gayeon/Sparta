#include <string>
#include <vector>
#include <algorithm> 

using namespace std;
long long solution(int a, int b) {
    long long lo = a, hi = b;
    if (lo > hi) swap(lo, hi);     
    long long n = hi - lo + 1;          
    return n * (lo + hi) / 2;           
}