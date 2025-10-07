#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, sum = 0; cin >> n;
    int temp = n, d = to_string(n).size();
    while (temp) {
        int r = temp % 10;
        sum += pow(r, d);
        temp /= 10;
    }
    cout << (sum == n ? "Armstrong" : "Not Armstrong");
}
