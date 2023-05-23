#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
    double a, b, c, det;
    cin >> a >> b >> c;
    
    det = b * b - 4 * a * c;

    if (a == 0) {
        if (b == 0 && c == 0) {
            printf("%d", -1);
        } else if (b == 0) {
            printf("%d", 0);
        } else if (c == 0) {
            printf("%d\n%.10f", 1, 0.0);
        } else {
            printf("%d\n%.10f", 1, -1.0 * c / b);
        }
    } else if (b == 0 && c == 0) {
        printf("%d\n%.10f", 1, 0.0);
    } else if (det < 0) {
        printf("%d", 0);
    } else if (det == 0) {
        printf("%d\n%.10f", 1, -0.5 * b / a);
    } else {
        double x1 = 0.5 / a * (-b - sqrt(det));
        double x2 = 0.5 / a * (sqrt(det) - b);
        if (a > 0) {
            printf("%d\n%.10f\n%.10f", 2, x1, x2);
        } else {
            printf("%d\n%.10f\n%.10f", 2, x2, x1);
        }
    }

    cout << endl;

    return 0;
}