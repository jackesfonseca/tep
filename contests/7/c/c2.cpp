#include <iostream>
#include <queue>
#include <vector>
#include <cmath>

const int MAX_N = 2000;

using namespace std;

bool infected[MAX_N + 1];
int X[MAX_N + 1], Y[MAX_N + 1];

void solve(int N, int D) {
    queue<int> q;
    infected[0] = true;
    q.push(0);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int i = 1; i < N; ++i) {
            if (!infected[i] && pow(X[i] - X[current], 2) + pow(Y[i] - Y[current], 2) <= pow(D, 2)) {
                infected[i] = true;
                q.push(i);
            }
        }
    }
}

int main() {

    ios::sync_with_stdio(false);

    int N, D;
    cin >> N >> D;

    for (int i = 0; i < N; ++i) {
        cin >> X[i] >> Y[i];
    }

    solve(N, D);

    for (int i = 0; i < N; ++i) {
        if(infected[i])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}