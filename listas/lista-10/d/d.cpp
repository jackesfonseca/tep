#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countColorChanges(const vector<vector<int>>& piece) {
    int n = piece.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int expectedColor = (i + j) % 2; 
            if (piece[i][j] != expectedColor) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n;
    vector<vector<vector<int>>> pieces(4, vector<vector<int>>(n, vector<int>(n)));

    
    cin >> n;

    for (int k = 0; k < 4; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> pieces[k][i][j];
            }
        }
    }

    int minColorChanges = n * n * 4; 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                for (int l = 0; l < 4; l++) {
                    vector<vector<int>> chessboard(2 * n, vector<int>(2 * n));

                    for (int x = 0; x < n; x++) {
                        for (int y = 0; y < n; y++) {
                            chessboard[x][y] = pieces[i][x][y];
                            chessboard[x][y + n] = pieces[j][x][y];
                            chessboard[x + n][y] = pieces[k][x][y];
                            chessboard[x + n][y + n] = pieces[l][x][y];
                        }
                    }
                    int colorChanges = countColorChanges(chessboard);
                    minColorChanges = min(minColorChanges, colorChanges);
                }
            }
        }
    }

    cout << minColorChanges << endl;

    return 0;
}