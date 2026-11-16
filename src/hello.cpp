#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        long long count = 0;
        int n; cin >> n;
        vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i].first >> v[i].second;
        } 
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if(v[i].first < v[j].first && v[i].second > v[j].second){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}