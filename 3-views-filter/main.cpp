#include "stdio.h"
#include <ranges>

int calculate(int bottom, int top) {
    if (top > bottom) {
        int sum = 0;
        for (int number : std::views::iota(bottom, top + 1)) {
            if (number % 2 == 0) {
                sum += number;
            }
        }
        return sum;
    } else {
        return 0;
    }
}

int main() {
    printf("%i\n", calculate(5, 12));  // 36
    printf("%i\n", calculate(5, 3));   // 0
    return 0;
}
