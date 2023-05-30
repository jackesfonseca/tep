#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> a(N, vector<int>(M));

    // Input the values of ai,j
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> a[i][j];
        }
    }

    int count = 0;

    // Check for pairs of people who are not next to each other in any photo
    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            bool adjacent = false;

            for (int k = 0; k < M; k++) {
                int idx1 = -1, idx2 = -1;

                // Find the indices of people i and j in the k-th photo
                for (int l = 0; l < N; l++) {
                    if (a[l][k] == i)
                        idx1 = l;
                    else if (a[l][k] == j)
                        idx2 = l;
                }

                // Check if i and j are adjacent in the k-th photo
                if (abs(idx1 - idx2) == 1) {
                    adjacent = true;
                    break;
                }
            }

            // If i and j are not adjacent in any photo, increment the count
            if (!adjacent)
                count++;
        }
    }

    cout << count << endl;

    return 0;
}
