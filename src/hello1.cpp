#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long merge(vector<pair<int, int>>& a, int l, int m, int r){
    vector<pair<int, int>> temp;
    int i = l;
    int j = m + 1;
    long long count = 0;
    while(i <= m && j <= r){
        if(a[i].second <= a[j].second){
            temp.push_back(a[i]);
            i++;
        }
        else {
            temp.push_back(a[j]);
            count += m - i + 1;
            j++;
        }
    }
    while(i <= m) {temp.push_back(a[i]); i++;}
    while (j <= r) {temp.push_back(a[j]); j++;}
    for (int k = 0; k < temp.size(); k++){
        a[l + k] = temp[k];
    }
    return count;
}

long long mergeSort(vector<pair<int, int>>& a, int l, int r){
    if(l >= r) return 0;
    int m = (l + r) / 2;
    long long left = mergeSort(a, l, m);
    long long right = mergeSort(a, m + 1, r);
    long long mid = merge(a, l, m, r);

    return left + right + mid;

}

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
        count = mergeSort(v, 0, n - 1);
        cout << count << endl;
    }
    return 0;
}