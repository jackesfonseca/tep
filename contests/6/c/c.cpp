#include <iostream>
#include <set>
using namespace std;

struct Item {
    int x, y;

    bool operator<(const Item& other) const {
        if (x == other.x) {
            return y < other.y;
        }
        return x < other.x;
    }
};

int main() {
    int N, M, H, K;
    string S;
    cin >> N >> M >> H >> K >> S;

    set<Item> items;
    for (int i = 0; i < M; i++) {
        Item item;
        cin >> item.x >> item.y;
        items.insert(item);
    }

    int x = 0, y = 0;
    for (int i = 0; i < N; i++) {
        char move = S[i];
        if (move == 'R') {
            x += 1;
        } else if (move == 'L') {
            x -= 1;
        } else if (move == 'U') {
            y += 1;
        } else if (move == 'D') {
            y -= 1;
        }

        H -= 1;
        if (H < 0) {
            cout << "No" << endl;
            return 0;
        }

        Item currentPosition = {x, y};
        if (items.count(currentPosition) && H < K) {
            H = K;
        }
    }

    cout << "Yes" << endl;

    return 0;
}