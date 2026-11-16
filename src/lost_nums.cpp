#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 8, 15, 16, 23, 42};
    cout << "? 1 2" << endl;
    int x; cin >> x; if(x==0) return 0;
    cout << "? 2 3" << endl;
    int y; cin >> y; if(y==0) return 0;
    cout << "? 3 4" << endl;
    int z; cin >> z; if(z==0) return 0;
    cout << "? 4 5" << endl;
    int a; cin >> a; if(a==0) return 0;
    do{
        if(v[0] * v[1] == x && v[1] * v[2] == y && v[2] * v[3] == z && v[3] * v[4] == a){
            cout << "! ";
            for(int num : v) cout << num << " ";
            cout << endl;
            return 0;
        }
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}