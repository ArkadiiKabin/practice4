#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n,m,a; cin >> n >> m >> a;
    long long x = ceil(static_cast<double>(n) / a); long long y = ceil(static_cast<double>(m) / a);
    cout << x * y;
    return 0;
}