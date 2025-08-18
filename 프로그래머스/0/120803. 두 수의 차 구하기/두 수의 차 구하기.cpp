#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num1 , int num2) {
    return num1 - num2;
}
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int answer = solution (num1, num2);
    cout << answer<<'\n';
    return 0;
}