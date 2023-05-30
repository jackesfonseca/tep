#include <iostream>
#include <cmath>

int main() {
    int N;
    
    while (std::cin >> N) {
        if (N == 0) {
            break;
        }
        
        int count = 0;
        
        for (int i = 1; i <= std::sqrt(N); i++) {
            if (N % i == 0) {
                count += 2;
            }
        }
        
        if (std::sqrt(N) * std::sqrt(N) == N) {
            count--;
        }
        
        std::cout << N << " " << count << std::endl;
    }
    
    return 0;
}