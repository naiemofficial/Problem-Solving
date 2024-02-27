#include <iostream>
#include <cmath>

int main() {
    long a, b, l;
    std::cin >> a >> b >> l;

    int count = 0;
    int m = 2;

    // Calculate the maximum value of x
    int max_x = std::log(l) / std::log(a);

    for (int x = 0; x <= max_x; ++x) {
        for (int y = 0; y <= m; ++y) {
            long s = std::pow(a, x) * std::pow(b, y);
            if (l == s) {
                count++;
            }
        }
    }

    std::cout << "=> " << count << std::endl;
    return 0;
}
