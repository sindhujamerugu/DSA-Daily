#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        int total = 0;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            total += A[i];
        }
        int len = N - K;
        int sum = 0;
        for (int i = 0; i < len; i++) {
            sum += A[i];
        }
        int maxi = sum;
        for (int i = len; i < N; i++) {
            sum += A[i];
            sum -= A[i - len];
            maxi = max(maxi, sum);
        }
        cout << maxi << endl;
    }

    return 0;
}