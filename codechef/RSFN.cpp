#include <iostream>

#include <vector>

using namespace std;

const int MOD = 1e9 + 7;
const int MAX_VAL = 100005;

long long F[MAX_VAL];

void pre_fibonacci() {
    F[1] = 1;
    F[2] = 1;
    for (int i = 3; i < MAX_VAL; ++i) {
        F[i] = (F[i - 1] + F[i - 2]) % MOD;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pre_fibonacci();

    int N, Q;
    if (!(cin >> N >> Q)) return 0;

    vector < long long > pref(N + 1, 0);
    for (int i = 1; i <= N; ++i) {
        int val;
        cin >> val;
        pref[i] = (pref[i - 1] + F[val]) % MOD;
    }

    while (Q--) {
        int L, R;
        cin >> L >> R;
        long long ans = (pref[R] - pref[L - 1] + MOD) % MOD;
        cout << ans << "\n";
    }

    return 0;
}