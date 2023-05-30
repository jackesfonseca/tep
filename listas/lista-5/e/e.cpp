#include <iostream>
#include <vector>
#include <string>
#include <sstream>

typedef unsigned long long int int64;

int64 GCD(int64 a, int64 b) {
    int64 r;
    if (a == 0 || b == 0)
        return a > 0 ? b : a;
    
    do {
        r = a % b;
        a = b;
        b = r;
    } while (r != 0);
    
    return a;
}

std::vector<int64> parseIntegers(const std::string& str) {
    std::vector<int64> numbers;
    std::istringstream iss(str);
    int64 temp;
    
    while (iss >> temp) {
        numbers.push_back(temp);
    }
    
    return numbers;
}

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore();
    
    for (int t = 1; t <= n; t++) {
        std::string input;
        std::getline(std::cin, input);
        
        std::vector<int64> m = parseIntegers(input);
        int64 max = 0;
        
        for (size_t i = 0; i < m.size(); i++) {
            for (size_t j = i + 1; j < m.size(); j++) {
                int64 gcd = GCD(m[i], m[j]);
                if (gcd > max)
                    max = gcd;
            }
        }
        
        std::cout << max << std::endl;
    }
    
    return 0;
}
