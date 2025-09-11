#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> arr(n);

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    unordered_map<long long,int> freq;
    for (long long x : arr) freq[x]++;

    vector<int> ans;

    for (int i = 0; i < n; i++) {
        long long curSum = sum - arr[i];  // remaining sum

        if (curSum % 2 == 0) {
            long long target = curSum / 2;

            freq[arr[i]]--;  // temporarily remove this element

            if (freq[target] > 0) {
                ans.push_back(i + 1); // store 1-based index
            }

            freq[arr[i]]++;  // restore count
        }
    }

    cout << ans.size() << "\n";
    for (int idx : ans) cout << idx << " ";
    cout << "\n";

    return 0;
}
