#include <bits/stdc++.h>
using namespace std;

vector<int> maximumsumSubarray(vector<int> &arr, int n) {
    int maxSum = INT_MIN, sum = 0;
    int start = 0, end = 0, tempStart = 0;
    int maxLen = 0;  // Variable to track the length of the subarray

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // If we find a new max sum, or we find the same sum but with a longer subarray
        if (sum > maxSum || (sum == maxSum && (i - tempStart + 1) > maxLen)) {
            maxSum = sum;
            start = tempStart;
            end = i;
            maxLen = i - tempStart + 1;  // Update the length of the subarray
        }

        // If sum becomes negative, reset sum and start a new subarray
        if (sum < 0) {
            sum = 0;
            tempStart = i + 1;
        }
    }

    // Return the subarray with the maximum sum
    return vector<int>(arr.begin() + start, arr.begin() + end + 1);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> result = maximumsumSubarray(arr, n);

        // Output the result
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
